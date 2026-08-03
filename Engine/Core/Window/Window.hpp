#pragma once

class Window
{
public:

	Window();

	bool Create();
	
	void Update();
	void Close();

	bool IsOpen() const;

private:

	bool m_isOpen;
};

