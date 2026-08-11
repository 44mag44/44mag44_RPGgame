#pragma once

enum class EventType
{
	None,
	WindowClose,
//	WindowResize,
//	WindowFocus,
//	WindowLostFocus,
//	WindowMoved,
//	AppTick,
//	AppUpdate,
//	AppRender,
	KeyPressed,
	KeyReleased,
//	KeyTyped,
	MouseButtonPressed,
	MouseButtonReleased,
	MouseMoved,
//	MouseScrolled
};


class Event
{
public:
	virtual ~Event() = default;
	
	virtual EventType GetType() const = 0;

	bool IsHandled() const
	{
		return m_Handled;
	}

	void SetHandled(bool handled) 
	{
		m_Handled = handled;
	}

private:
	bool m_Handled = false;
};