#include "grains.h"

namespace grains {
    long long unsigned int square(long long unsigned int x){
        long long unsigned int sum=1;
            for( int i=x;i>=2;i--){
                sum=sum*2;
            }
        
        return sum;
    } 
    long long unsigned  total(){
        long long unsigned  x=1;
        for(int i=1;i<64;i++){
            x=x*2;
        }
        x=x*2-1;
        return x;
    }
}  // namespace grains
