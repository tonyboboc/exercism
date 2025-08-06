#include "all_your_base.h"
namespace all_your_base {

// TODO: add your solution here
std::vector<unsigned int> convert(int x,std::vector<unsigned int>& value,int y){
    if(x<=1||y<=1){
        throw std::invalid_argument("invalid argument");
    }
    long unsigned int size=value.size();
    for(long unsigned int i=0;i<size;i++){
        if(value[i]>=(unsigned int)x){
            throw std::invalid_argument("invalid argument");
        }
    }
    int z=0;
        
        for(long unsigned int i=0;i<size;i++){
            z=z+value[i]*(int)pow(x,size-i-1);
        
        }    
    
    value.clear();
    
    while(z!=0){
        value.insert(value.begin(),z%y);
        z=z/y;
    }
    return value;
    

}}  // namespace all_your_base
