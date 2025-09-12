#include "etl.h"

namespace etl {

std::map<char,int> transform(const std::map<int,std::vector<char>>& old){
    std::map <char,int> map;
    for(const auto & [key,value]:old){
        std::size_t size=value.size();
        char a;
        for(std::size_t i=0;i<size;i++){
            a=tolower(value.at(i));
            map[a]=key;
        }
    }
    return map;
}

}  // namespace etl
