#pragma once


#include "Core/Event/Event.hpp"

class KeyEvent : public Event
{
public:
	explicit KeyEvent(int Key)
		:
		m_Key(Key)
	{
	}


	int GetKey() const
	{
		return m_Key;
	}

protected:
	int m_Key;
};