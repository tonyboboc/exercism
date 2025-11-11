#pragma once
#include <iostream>
#include <stdexcept>
namespace perfect_numbers {
     enum class classification{
    perfect,
    abundant,
    deficient
    };
    classification classify(int x);
}  // namespace perfect_numbers
