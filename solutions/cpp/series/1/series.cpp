#include "series.h"

namespace series {

// TODO: add your solution here
std::vector<std::string> slice(std::string s,const int & x){
    std::size_t lenght=s.size();
    if(x>static_cast< int>(lenght)){throw std::domain_error {"not a big enough number"};}
    if(x<=0){throw std::domain_error {"can't devide by 0 or less"};}
    if(lenght<=0){throw std::domain_error{"didn't introduce a number"};}
    std::vector<std::string> v;
    for(std::size_t i=0;i+x<lenght+1;i++){
        v.push_back(s.substr(i,x));
    }
    return v;
    
}
}  // namespace series
