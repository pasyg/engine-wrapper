// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#include <cstdint>

namespace engine
{
    enum class Gen : std::uint8_t
    {
        RBY,
        GSC,
        ADV,
        DPP,
        BW,
        ORAS,
        SM,
        SS,
        SV,
    };
} // namespace engine