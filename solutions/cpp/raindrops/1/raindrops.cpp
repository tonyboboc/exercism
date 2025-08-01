#include "raindrops.h"

namespace raindrops {
    std::string convert(int x){
        std::string s="";
        if(x%3==0){
            s=s+"Pling";
        }
        if(x%5==0){
            s=s+"Plang";
        }
        if(x%7==0){
            s=s+"Plong";
        }
        if((x%3!=0)&&(x%5!=0)&&(x%7!=0)){
            return std::to_string(x);;
        }
        return s;
    }
}  // namespace raindrops
