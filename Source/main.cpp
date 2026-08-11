#include "Core/Application/Application.hpp"
#include "Core/Engine/Engine.hpp"
#include "Core/Renderer/NullRenderer.hpp"
	
#include <memory>
#include <utility>

int main()
{
	Application application;
	
	auto renderer = std::make_unique<NullRenderer>();
	
	Engine engine(application, std::move(renderer));

	engine.Run();

	return 0;
}