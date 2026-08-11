#pragma once


#include "Core/Event/KeyEvent.hpp"

class KeyPressedEvent : public KeyEvent
{
public:
	explicit KeyPressedEvent(int Key)
		:
		KeyEvent(Key)
	{
	}


	static EventType GetStaticType()
	{
		return EventType::KeyPressed;
	}



	EventType GetType() const override
	{
		return	GetStaticType();
	}
};
