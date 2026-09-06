#include "Core/Input/Input.hpp"

#include "Core/Event/EventDispatcher.hpp"
#include "Core/Event/KeyPressedEvent.hpp"
#include "Core/Event/KeyReleasedEvent.hpp"

std::array<bool, Input::KeyCount> Input::m_Keys = {};

void Input::OnEvent(Event& event)
{
    EventDispatcher dispatcher(event);

    dispatcher.Dispatch<KeyPressedEvent>(
        [](KeyPressedEvent& event)
        {
            Key key = event.GetKey();

            auto index = static_cast<std::size_t>(key);

            if (index < Input::KeyCount)
            {
                Input::m_Keys[index] = true;
            }

            return false;
        }
    );

    dispatcher.Dispatch<KeyReleasedEvent>(
        [](KeyReleasedEvent& event)
        {
            Key key = event.GetKey();

            auto index = static_cast<std::size_t>(key);

            if (index < Input::KeyCount)
            {
                Input::m_Keys[index] = false;
            }

            return false;
        }
    );
}

bool Input::IsKeyDown(Key key)
{
    auto index = static_cast<std::size_t>(key);

    if (index >= KeyCount)
    {
        return false;
    }

    return m_Keys[index];
}

bool Input::IsKeyUp(Key key)
{
    return !IsKeyDown(key);
}