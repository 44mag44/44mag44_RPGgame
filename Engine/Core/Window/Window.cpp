#include "Core/Window/Window.hpp"

#include "Core/Event/WindowCloseEvent.hpp"
#include "Core/Event/KeyEvent.hpp"
#include "Core/Event/KeyPressedEvent.hpp"

#include "Core/Input/Key.hpp"

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
		KeyPressedEvent event(Key::A);

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

