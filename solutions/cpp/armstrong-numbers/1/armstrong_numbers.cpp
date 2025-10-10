#include "armstrong_numbers.h"

namespace armstrong_numbers {
long long power(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)  
            result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}
 bool is_armstrong_number(long long x){
     int z=x,p=0;
     while(z!=0){
         p++;
         z=z/10;
     }
     int sum=0;z=x;
     while(z!=0){
         sum=sum+power(z%10,p);
         z=z/10;
     }
     if(sum==x){
         return true;
     }
     return false;
 }

}  // namespace armstrong_numbers