#include "binary.h"

namespace binary {

// TODO: add your solution here
int convert(const std::string & s){
    int p=s.size()-1;
    int num=0;
    for(char c: s){
        if(c=='1'){
            num=num+static_cast<int>(std::pow(2,p));
            p--;
        }else if(c=='0'){
            p--;
        }
        else{
            return 0;
        }
    }
    return num;
}
}  // namespace binary
