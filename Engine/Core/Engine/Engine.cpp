#include "Core/Engine/Engine.hpp"
#include "Core/Time/Time.hpp"

#include <iostream>
#include <utility>

Engine::Engine
	(
		Application& application,
		std::unique_ptr<Renderer> renderer
	)
	:
	m_Application(application),
	m_Running(true),
	m_Renderer(std::move(renderer))
{

}


void Engine::Run()
{
	while (m_Running && m_Window.IsOpen())
	{
		Time::Update();

		m_Window.Update();

		ProcessInput();

		m_World.Update();
		m_Application.OnUpdate();
		m_Renderer->BeginFrame();
		m_Application.OnRender();
		m_Renderer->EndFrame();
	}
	m_Window.Close();
}



void Engine::ProcessInput()
{
	std::cout << "Processing Engine input..." << std::endl;
}