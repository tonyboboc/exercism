#include "perfect_numbers.h"

namespace perfect_numbers {
    
    classification classify(int x){
        if(x<=0){
            throw std::domain_error("<=0");
        }
        if(x==1){
              return classification::deficient;
        }
        int sum=1;
        for(int i=2;i<=x/2;i++){
            if(x%i==0){
                sum+=i;
            }
        }
        if(sum==x){
            return classification::perfect;
        }
        else if(sum<x){
            return classification::deficient;
        }
        else{
            return classification::abundant;
        }
    }
}  // namespace perfect_numbers
