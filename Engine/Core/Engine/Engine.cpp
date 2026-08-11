#include "Core/Engine/Engine.hpp"
#include "Core/Time/Time.hpp"
#include "Core/Event/EventDispatcher.hpp"
#include "Core/Event/WindowCloseEvent.hpp"


#include <iostream>
#include <utility>

Engine::Engine(
	Application& application,
	std::unique_ptr<Renderer> renderer
)
	:
	m_Application(application),
	m_Renderer(std::move(renderer)),
	m_Running(true)
{
	m_Window.SetEventCallback(
		[this](Event& event)
		{
			OnEvent(event);
		}
	);

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
		m_Renderer->Draw();
		m_Renderer->EndFrame();
	}
	m_Window.Close();
}



void Engine::ProcessInput()
{
	std::cout << "Processing Engine input..." << std::endl;
}



void Engine::OnEvent(Event& event)
{
	EventDispatcher dispatcher(event);

	dispatcher.Dispatch<WindowCloseEvent>(
		[this](WindowCloseEvent& event)
		{
			return OnWindowClose(event);
		}
	);
}



bool Engine::OnWindowClose(WindowCloseEvent& event)
{
	m_Running = false;

	return true;
}