#include "Core/Window/Window.hpp"
#include "Core/Event/WindowCloseEvent.hpp"
#include "Core/Event/KeyEvent.hpp"

#include <utility>

Window::Window()
	:
	m_IsOpen(true)
{
}

void Window::Update()
{
	static bool eventSent = false;

	if (!eventSent)
	{
		KeyPressedEvent event(65);

		DispatchEvent(event);

		eventSent = true;
	}
	// Update window logic here
}



void Window::Close()
{
	m_IsOpen = false;
}



bool Window::IsOpen() const
{
	return m_IsOpen;
}

void Window::DispatchEvent(Event &event)
{
	if(m_EventCallback)
	{
		m_EventCallback(event);
	}
}

void Window::SetEventCallback(EventCallback callback)
{
	m_EventCallback = std::move(callback);
}

