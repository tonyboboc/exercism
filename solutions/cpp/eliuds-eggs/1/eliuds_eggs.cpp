#include "eliuds_eggs.h"

namespace chicken_coop {

// TODO: add your solution here
int positions_to_quantity(int x){
     int count=0;
    while(x!=0){
        if(x%2==1){
            count++;
        }
        x=x/2;
    }
    return count;
}
}  // namespace chicken_coop
 