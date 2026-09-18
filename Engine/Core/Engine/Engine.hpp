#pragma once

#include <memory>

#include "Core/Application/Application.hpp"
#include "Core/World/World.hpp"
#include "Core/Window/Window.hpp"
#include "Core/Renderer/Renderer.hpp"
#include "Core/Event/WindowCloseEvent.hpp"
#include "Core/Input/Input.hpp"
#include "Core/Input/InputBackend.hpp"





class Engine
{
public:
	Engine(
		Application& application,
		std::unique_ptr<Renderer> renderer,
		std::unique_ptr<InputBackend> inputBackend
	);

	void Run();
	
private:
	Application& m_Application;
	std::unique_ptr<Renderer> m_Renderer;
	std::unique_ptr<InputBackend> m_InputBackend;

	bool m_Running;

	World m_World;
	Window m_Window;
	
	void ProcessInput();
	void OnEvent(Event& event);

	bool OnWindowClose(WindowCloseEvent& event);
};

		