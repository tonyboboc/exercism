#include "run_length_encoding.h"

namespace run_length_encoding {
std::string encode (std::string_view s){
    std::string value="";
    int c=1;
    for(long unsigned int i=0;i<s.size();i++){
        if(i+1<s.size()){
            if(s[i]==s[i+1]){
                c++;
            }
            else{
                if(c==1){
                    value+=s[i];
                }else{
                value+=std::to_string(c);
                value+=s[i];
                }
                c=1;
            }
        }
        else{
            if(i==0){
                value+=s[i];
            }
            else{
                if(s[i-1]==s[i]){
                    value+=std::to_string(c);
                    value+=s[i];
                }
                else{
                    value+=s[i];
                }
            }
        }
    }
    return value;
}
std::string decode(std::string_view s){
    std::string value="";
    int sum=0;
    for(long unsigned int i=0;i<s.size();i++){
        if(s[i]>=48&&s[i]<=57){
            sum=sum*10+(s[i]-'0');
        }else{
            if(sum==0){
                value+=s[i];
            }else{
                for(int j=0;j<sum;j++){
                    value+=s[i];
                }
                sum=0;
            }
        }
    }
    return value;
}
// TODO: add your solution here

}  // namespace run_length_encoding
