#include "prime_factors.h"

namespace prime_factors {
std::vector<long long> of(long long&& x ){
    int i=2;
    std::vector <long long> v ;
    while (x>1){
        if(x%i==0){
            v.push_back(i);
            x=x/i;
        }
        else{i++;}
    }
    return v;
}
}  // namespace prime_factors
