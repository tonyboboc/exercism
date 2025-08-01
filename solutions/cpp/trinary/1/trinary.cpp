#include "trinary.h"

namespace trinary {
int to_decimal (std::string&& s) {
    int n=s.size();
    int p=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]<48||s[i]>57){return 0;}
        p=p+(s[i]-'0')*static_cast<int>(pow(3,n-i-1));
        
    }
    return p;
}
// TODO: add your solution here

}  // namespace trinary
