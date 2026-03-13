#include "rotational_cipher.h"

namespace rotational_cipher {

// TODO: add your solution here
std::string rotate(const std::string & s,int x){
    std::string value;
    for(char c:s){
        if(isalpha(c)){
                
            if(isupper(c)){
                c=((c-'A'+x)%26)+65;
            }
            else{
                c=((c-'a'+x)%26)+97;
            }
            
        }
        value+=c;
    }
    return value;
}
}  // namespace rotational_cipher
