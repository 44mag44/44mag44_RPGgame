#pragma once

#include "Core/Event/Event.hpp"
#include "Core/Input/Key.hpp"

class KeyEvent : public Event
{
public:
    Key GetKey() const
    {
        return m_Key;
    }

protected:
    explicit KeyEvent(Key key)
        :
        m_Key(key)
        {
        }
        
    Key m_Key;
};