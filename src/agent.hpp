#pragma once

#include "generation.hpp"

/*
* Abstract templated class to derive Agents for different generations from
*/
namespace engine
{
    template<Gen gen, typename GameState>
    struct Agent<gen>
    {
        virtual void make_choice(GameState state) = 0;
    }
}