#pragma once


#include "Core/Event/Event.hpp"

#include <functional>


class Window
{
public:
	using EventCallback = std::function<void(Event&)>;

public:
    Window();

    void Update();
    void Close();

    bool IsOpen() const;

    void SetEventCallback(EventCallback callback);


private:
    bool m_IsOpen;
	EventCallback m_EventCallback;
};