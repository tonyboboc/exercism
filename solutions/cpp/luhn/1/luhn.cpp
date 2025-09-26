#include "luhn.h"

namespace luhn {

bool valid(const std::string & s){
    std::deque<int> values;
    for(char c:s){
        if(std::isdigit(c)){
            values.push_front(c-'0');
        }else if(c==' '){continue;}
        else{
            return false;
        }
    }
    int sum=0;
    for(std::size_t i=0;i<values.size();i++){
        if(i%2==1){
            values[i]=values[i]*2;
            if(values[i]>=10){
                values[i]=values[i]-9;
            }
        }
        sum=sum+values[i];
    }
    if(values.size()==1){return false;}
    if(sum%10==0){return true;}
    return false;
}

}  // namespace luhn
