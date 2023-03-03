// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include "generation.hpp"

/*
* Abstract templated class to derive Agents for different generations from
*/
namespace engine
{
    template<Gen gen, typename GameState>
    struct Agent
    {
        virtual void make_choice(GameState state) = 0;
    };
}