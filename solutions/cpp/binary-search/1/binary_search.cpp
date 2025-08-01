#include "binary_search.h"

namespace binary_search {

// TODO: add your solution here
std::size_t find(const std::vector<int> & v,int x){
    if (v.empty()) throw std::domain_error("empty vector");
    if(x<v.at(0)){throw std::domain_error("value doesn't exist inside");}
    std::size_t low=0;
    std::size_t high=v.size()-1;
    std::size_t mid;
    while(low<=high){
        mid = low + (high - low) / 2;
        if(v.at(mid)==x){return mid;}
        if(v.at(mid)<x){low=mid+1;}
        else{high=mid-1;}
    }
    throw std::domain_error("value doesn't exist inside ");

}
}  // namespace binary_search
