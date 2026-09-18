#include "Core/Window/Window.hpp"

#include "Core/Event/WindowCloseEvent.hpp"

#include <utility>

Window::Window()
	:
	m_IsOpen(true)
{
}

void Window::Update()
{
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

