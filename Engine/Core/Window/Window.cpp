#include "Core/Window/Window.hpp"


Window::Window()
	: m_IsOpen(true)
{
}

void Window::Update()
{
	// Update window logic here
}



bool Window::IsOpen() const
{
	return m_IsOpen;
}



void Window::Close()
{
	m_IsOpen = false;
}