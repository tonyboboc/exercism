#include "pangram.h"

namespace pangram {
bool is_pangram(std::string s){
    std::string q="abcdefghijklmnopqrstuvwxyz";
    
    int size=s.size();
    for(int i=0;i<size;i++){
     s[i]=tolower(s[i]);    
    }
    std::sort(s.begin(),s.end());
    for(int i=0;i<size;i++){
        if(tolower(s[i])==q[0]){
           q.erase(q.begin()); 
        }
        if(q.empty()){break;}
    }
    if(q.empty()){
        return true;
    }else{return false;}
    
}
}  // namespace pangram
