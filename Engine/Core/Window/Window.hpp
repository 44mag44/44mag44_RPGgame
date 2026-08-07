#pragma once

class Window
{
public:

    Window();

    void Update();

    bool IsOpen() const;

    void Close();

private:
    bool m_IsOpen;
};