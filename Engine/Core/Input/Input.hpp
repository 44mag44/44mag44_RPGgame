#pragma once

class Event;

class Input
{
public:
    static void OnEvent(Event& event);

    static bool IsKeyDown(int keyCode);
    static bool IsKeyUp(int keyCode);

private:
    static bool m_Keys[256];
};