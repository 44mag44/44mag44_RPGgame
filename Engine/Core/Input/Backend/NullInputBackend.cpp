#include "NullInputBackend.hpp"

#include "Core/Event/KeyPressedEvent.hpp"
#include "Core/Input/Key.hpp"

void NullInputBackend::ProcessEvents()
{
    if (m_EventCallback)
    {
        KeyPressedEvent event(Key::A);
        
        m_EventCallback(event);
    }
}