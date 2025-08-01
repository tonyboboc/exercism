#include "collatz_conjecture.h"

namespace collatz_conjecture {
 int steps(int x){
    int s=0;
     if (x <= 0) {
            throw std::domain_error("Input must be a positive integer.");
        }
    while(x!=1){
        
        if (x % 2 == 0) {
                x = x / 2;s++;;
            } if(x%2!=0&&x!=1) {
                x = (x * 3) + 1;s++;;
            }

            
    }
    return s;
}
}  // namespace collatz_conjecture
