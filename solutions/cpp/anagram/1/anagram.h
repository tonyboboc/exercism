#pragma once
#include <string>
#include <unordered_set>
#include <cstring>
#include <algorithm>
namespace anagram {

class anagram{
    private:
    std::string value;
  public:  
    anagram(const std::string & s):value(s){}
    std::unordered_set<std::string> matches( const std::unordered_set<std::string>& values){
        std::unordered_set<std::string> matching;
        for(char & c:value){
            c=tolower(c);
        }
        bool ok=true;
        std::string s1;
        for(std::string s:values){
            s1=s;
            for(char & c:s){
            c=tolower(c);
            }   
            if(value==s){
                ok=false;
            }
            std::sort(value.begin(),value.end());
            std::sort(s.begin(),s.end());
            if(value!=s){
                ok=false;
            }
            if(ok&&value.size()==s.size()){
                matching.insert(s1);
            }
            ok=true;
            
        }
        return matching;
    }
};

}  // namespace anagram
