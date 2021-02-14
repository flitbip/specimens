//
//  stopwatch.cpp
//

#include "stopwatch.h"

namespace stopwatch {

// A timer using the specified clock.
template <class Clock = std::chrono::system_clock>

// Times how long it takes a function to execute using the specified clock.
template <class Clock = rdtscp_clock, class Func>

// Samples the given function N times using the specified clock.
template <std::size_t N, class Clock = rdtscp_clock, class Func>
} /* namespace stopwatch */
