#include "Core/Window/Window.hpp"

#include <utility>


Window::Window()
	:  m_IsOpen(true)
{
}

Window::Window(std::unique_ptr<WindowsBackend> backend)
	: m_Backend(std::move(backend))
	{

	}



void Window::Update()
{
	m_Backend->ProcessEvents();
}



void Window::Close()
{
	m_Backend->Close();
}



bool Window::IsOpen() const
{
	return m_Backend->IsOpen();
}



void Window::SetEventCallback(EventCallback callback)
{
	m_EventCallback = std::move(callback);
}

