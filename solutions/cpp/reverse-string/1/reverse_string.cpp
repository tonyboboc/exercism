#include "reverse_string.h"

namespace reverse_string {
std::string reverse_string(std::string s){
    int q=s.size();
    std::string p;
    for(int i=q-1;i>=0;i--){
        p=p+s[i];
    }
    return p;
}
}  // namespace reverse_string
