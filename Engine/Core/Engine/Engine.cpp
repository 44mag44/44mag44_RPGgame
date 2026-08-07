#include "Core/Engine/Engine.hpp"
#include "Core/Time/Time.hpp"


#include <iostream>

Engine::Engine(Application& application)
	:
	m_Application(application),
	m_Running(true)
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

		m_Renderer.BeginFrame();

		m_Application.OnRender();

		m_Renderer.EndFrame();
		
	}
}



void Engine::ProcessInput()
{
	std::cout << "Processing Engine input..." << std::endl;
}