#include "Core/Window/Window.hpp"


Window::Window()
	: m_isOpen(false)
{

}



bool Window::Create()
{
	m_isOpen = true;
	return m_isOpen;
}


void Window::Update()
{
	// Update window logic here
}


void Window::Close()
{
	m_isOpen = false;
}


bool Window::IsOpen() const
{
	return m_isOpen;
}