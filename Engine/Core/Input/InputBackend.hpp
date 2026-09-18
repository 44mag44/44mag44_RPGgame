#pragma once

#include "Core/Event/Event.hpp"

#include <functional>



class InputBackend
{
public:
    using EventCallback = std::function<void(Event&)>;

    virtual ~InputBackend() = default;

	virtual void ProcessEvents() = 0;

    void SetEventCallback(EventCallback callback)
    {
        m_EventCallback = std::move(callback);
    }
    
    protected:
        EventCallback m_EventCallback;
};