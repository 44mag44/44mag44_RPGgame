#include "Core/Application/Application.hpp"
#include "Core/Engine/Engine.hpp"
#include "Core/Renderer/NullRenderer.hpp"
#include "Core/Input/Backend/NullInputBackend.hpp"
	
#include <memory>
#include <utility>

int main()
{
	Application application;
	
	auto renderer = std::make_unique<NullRenderer>();
	
	Engine engine
	(
		application,
		std::make_unique<NullRenderer>(),
		std::make_unique<NullInputBackend>()
	);

	engine.Run();

	return 0;
}