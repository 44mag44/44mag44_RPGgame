#pragma once

#include <memory>

#include "Core/Application/Application.hpp"
#include "Core/World/World.hpp"
#include "Core/Window/Window.hpp"
#include "Core/Renderer/Renderer.hpp"
#include "Core/Event/WindowCloseEvent.hpp"



class Engine
{
public:
	Engine(
		Application& application,
		std::unique_ptr<Renderer> renderer
	);

	void Run();
	
private:
	Application& m_Application;
	std::unique_ptr<Renderer> m_Renderer;

	bool m_Running;

	World m_World;
	Window m_Window;
	
	void ProcessInput();
	void OnEvent(Event& event);

	bool OnWindowClose(WindowCloseEvent& event);
};

		