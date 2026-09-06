#pragma once

#include "Core/Event/Event.hpp" 
#include "Core/Input/Key.hpp"

#include <array>
#include <cstddef>

class Input
{
public:
    static void OnEvent(Event& event);

    static bool IsKeyDown(Key key);
    static bool IsKeyUp(Key key);

    static constexpr std::size_t KeyCount =
        static_cast<std::size_t>(Key::Count);

private:
    static std::array<bool, KeyCount> m_Keys;
};