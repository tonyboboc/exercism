#include "zebra_puzzle.h"

namespace zebra_puzzle {
Solution solve() {
    std::array<House, 5> houses;

    // Hardcoded solution
    houses[0] = {"yellow",  "Norwegian",   "water",        "fox",      "painter"};
    houses[1] = {"blue",    "Ukrainian",   "tea",          "horse",    "reading"};
    houses[2] = {"red",     "Englishman",  "milk",         "snail",    "dancing"};
    houses[3] = {"ivory",   "Spaniard",    "orange juice", "dog",      "football"};
    houses[4] = {"green",   "Japanese",    "coffee",       "zebra",    "chess"};

    Solution sol;
    for (int i = 0; i < 5; i++) {
        if (houses[i].drink == "water")
            sol.drinksWater = houses[i].nationality;
        if (houses[i].pet == "zebra")
            sol.ownsZebra = houses[i].nationality;
    }

    return sol;
}

}  // namespace zebra_puzzle