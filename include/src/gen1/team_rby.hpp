// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <algorithm>

#include "team.hpp"
#include "pokemon_rby.hpp"

namespace engine
{
namespace RBY
{
    template<Gen gen>
    struct Team;
    
    template<>
    struct Team<Gen::RBY>
    {
        // Array that stores all the information of one Team
        std::array<std::uint8_t, 184> bytes{ 0 };

        constexpr Team(const std::array<Pokemon<Gen::RBY>, 6>& pmember)
        {
            for(int i = 0; i < 24; ++i)
            {
                *(bytes.begin() + i)        = *(pmember[0].bytes.begin() + i);
                *(bytes.begin() + i + 24)   = *(pmember[1].bytes.begin() + i);
                *(bytes.begin() + i + 48)   = *(pmember[2].bytes.begin() + i);
                *(bytes.begin() + i + 72)   = *(pmember[3].bytes.begin() + i);
                *(bytes.begin() + i + 96)   = *(pmember[4].bytes.begin() + i);
                *(bytes.begin() + i + 120)  = *(pmember[5].bytes.begin() + i);
            }

            bytes[176] = 1;
            bytes[177] = 2;
            bytes[178] = 3;
            bytes[179] = 4;
            bytes[180] = 5;
            bytes[181] = 6;
        };

        constexpr auto begin() 
        { 
            return bytes.begin(); 
        }

        constexpr auto end()
        {
            return bytes.end();
        }

        constexpr auto size()
        {
            return bytes.size();
        }
    };
} // namespace RBY
} // namespace engine