#pragma once

#include "Core/Event/Event.hpp"

#include <functional>

class EventDispatcher
{
public:
	explicit EventDispatcher(Event& event)
        :
        m_Event(event)
    {}


    template<typename T, typename F>
    bool Dispatch(F&& function)
    {
        if (m_Event.GetType() == T::GetStaticType())
        {
            m_Event.SetHandled(
                function(static_cast<T&>(m_Event))
            );

            return true;
        }

        return false;
    }

private:
    Event& m_Event;
};