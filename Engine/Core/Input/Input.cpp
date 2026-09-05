#include "Core/Input/Input.hpp"

#include "Core/Event/EventDispatcher.hpp"
#include "Core/Event/KeyPressedEvent.hpp"
#include "Core/Event/KeyReleasedEvent.hpp"

#include <iostream>

bool Input::m_Keys[256] = {};

void Input::OnEvent(Event& event)
{
    EventDispatcher dispatcher(event);

    dispatcher.Dispatch<KeyPressedEvent>(
        [](KeyPressedEvent& event)
        {
            int keyCode = event.GetKeyCode();

            if (keyCode >= 0 && keyCode < 256)
            {
                m_Keys[keyCode] = true;
            }

            return false;
        }
    );

    dispatcher.Dispatch<KeyReleasedEvent>(
        [](KeyReleasedEvent& event)
        {
            int keyCode = event.GetKeyCode();

            if (keyCode >= 0 && keyCode < 256)
            {
                m_Keys[keyCode] = false;
            }

            return false;
        }
    );
}

bool Input::IsKeyDown(int keyCode)
{
    if (keyCode < 0 || keyCode >= 256)
    {
        return false;
    }

    return m_Keys[keyCode];
}

bool Input::IsKeyUp(int keyCode)
{
    return !IsKeyDown(keyCode);
}