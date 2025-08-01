#include "hamming.h"

namespace hamming {
    int compute (std::string s1, std::string s2){
        int s=0;
        if(s1.size()!=s2.size()){throw std::domain_error("different sizes");}
        for (long unsigned int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){s=s+1;}
        }return s;
    }
}  // namespace hamming
