#include "isbn_verifier.h"

namespace isbn_verifier {

bool is_valid(const std::string & s){
int k=10;
    int sum=0;
    for(char c:s){
        if(c>=48&&c<=57){
              sum=sum+(k*(c-'0'));
            k--;
        }
        else if(c=='X'||c=='x'){
            if(k!=1){
                return false;
            }
            sum=sum+(k*10);
            k--;
        }
        else if(c=='-'){
            continue;
        }
        else{
            return false;
        }
    }
    if(k<0||k>0){
        return false;
    }
    if(sum%11==0){
        return true;
    }
    return false;
}

}  // namespace isbn_verifier
