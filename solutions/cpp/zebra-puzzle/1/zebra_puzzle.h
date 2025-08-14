#pragma once

#include <string>
#include <array>
namespace zebra_puzzle {

struct Solution {
    std::string drinksWater;
    std::string ownsZebra;
};
struct House{
    std::string color;
    std::string nationality;
    std::string drink;
    std::string pet;
    std::string hobby;
        
};
Solution solve();
}  // namespace zebra_puzzle
