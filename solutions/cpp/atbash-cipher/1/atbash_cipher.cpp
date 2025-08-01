#include "atbash_cipher.h"

namespace atbash_cipher {
std::string encode (std::string str){
    std::string final;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::size_t n=str.size();
    std::size_t i=0;
    int q=0;
    while(i<n){
        if(str[i]>=97&&str[i]<=122){
            final+=219-str[i];
            q++;
            if(q%5==0&&i<n-2){
                final+=" ";
                q=0;
            }
        }
        if(str[i]>=48&&str[i]<=57){
            final+=str[i];
            q++;
            if(q%5==0&&i<n-1){
                final+=" ";
                q=0;
            }
        }
        i++;
    }
    return final;
}
    std::string decode (std::string str){
    std::string final;
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::size_t n=str.size();
    std::size_t i=0;
    
    while(i<n){
        if(str[i]>=97&&str[i]<=122){
            final+=219-str[i];
            
        }if(str[i]>=48&&str[i]<=57){
            final+=str[i];
            
        }
        i++;
    }
    return final; 
}
}  // namespace atbash_cipher
