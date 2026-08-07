#pragma once

class Application
{
public:

    Application();
    virtual ~Application() = default;

    virtual void OnUpdate();
    virtual void OnRender();
};