#pragma once

#include "Core/Event/Event.hpp"

class KeyPressedEvent : public Event
{
public:
    explicit KeyPressedEvent(int keyCode)
        :
        m_KeyCode(keyCode)
    {
    }

    static EventType GetStaticType()
    {
        return EventType::KeyPressed;
    }

    EventType GetType() const override
    {
        return GetStaticType();
    }

    int GetKeyCode() const
    {
        return m_KeyCode;
    }

private:
    int m_KeyCode;
};