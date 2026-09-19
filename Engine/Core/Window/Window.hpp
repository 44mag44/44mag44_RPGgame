#pragma once


#include "Core/Event/Event.hpp"
#include "Core/Window/Backend/WindowsBackend.hpp"

#include <functional>
#include <memory>

class Window
{
public:
    Window();  

	using EventCallback = std::function<void(Event&)>;

    explicit Window(std::unique_ptr<WindowsBackend> backend);

    void Update();
    void Close();

    bool IsOpen() const;

    void SetEventCallback(EventCallback callback);
    
private:
    std::unique_ptr<WindowsBackend> m_Backend;
    bool m_IsOpen = true;
    

	EventCallback m_EventCallback;
};