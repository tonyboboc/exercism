#include "nucleotide_count.h"

namespace nucleotide_count {
std::map<char,int> count(std::string s){
     std::map<char,int> mp={{'A',0},{'C',0},{'G',0},{'T',0}};
    for(size_t i=0;i<s.size();i++){
        auto it=mp.find(s[i]);
        if(it==mp.end()){
            throw std::invalid_argument("INVALID");
        }
        int value=it->second;
        value++;
        it->second=value;
    }
    return mp;
}
}  // namespace nucleotide_count
