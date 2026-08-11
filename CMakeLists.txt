# CMakeList.txt: проект CMake для 44mag44_RPGgame; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

cmake_minimum_required (VERSION 3.28)


# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
project(44mag44_RPGgame)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Добавьте источник в исполняемый файл этого проекта.
add_executable(
	44mag44_RPGgame

	Source/main.cpp

	Engine/Core/Application/Application.hpp
	Engine/Core/Application/Application.cpp

	Engine/Core/Engine/Engine.hpp
	Engine/Core/Engine/Engine.cpp

	Engine/Core/Time/Time.hpp
	Engine/Core/Time/Time.cpp

	Engine/Core/Window/Window.hpp
	Engine/Core/Window/Window.cpp

	Engine/Core/World/World.hpp
	Engine/Core/World/World.cpp

	Engine/Core/Event/Event.hpp
	Engine/Core/Event/WindowCloseEvent.hpp
	Engine/Core/Event/KeyEvent.hpp
	Engine/Core/Event/KeyPressedEvent.hpp
	Engine/Core/Event/KeyReleasedEvent.hpp
	Engine/Core/Event/EventDispatcher.hpp

	Engine/Core/Renderer/Renderer.hpp

	Engine/Core/Renderer/NullRenderer.cpp
	Engine/Core/Renderer/NullRenderer.hpp
)


target_include_directories(
	44mag44_RPGgame
	PRIVATE
	Engine
	Game
)



# TODO: Добавьте тесты и целевые объекты, если это необходимо.