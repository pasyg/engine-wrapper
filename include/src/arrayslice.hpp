// Copyright pasyg.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#pragma once

template<typename Iter>
struct ArraySlice
{
    Iter first;
    Iter last;
    constexpr Iter begin()
    {
        return first;
    }
    constexpr Iter end()
    {
        return last;
    }
};