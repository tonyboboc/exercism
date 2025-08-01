#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>
namespace grade_school {
class school{
public:
    std::map<int,std::vector<std::string>> mp;
    std::map<int,std::vector<std::string>> roster() const{
        return mp;
    }
    void add (std::string s,int x) {
        
        
        bool b=false;
        for(auto& et:mp){
            for(long unsigned int i=0;i<et.second.size();i++){
                if(et.second.at(i)==s){b=true;}
            }
        }
        if(b){
            throw std::domain_error("can't have two students with same name");
        }
        else{
                mp[x].push_back(s);
                std::sort(mp[x].begin(),mp[x].end());
        }
        
    }
        
        
    
    const std::vector<std::string>& grade(int x)const {
            auto it = mp.find(x);
    if (it != mp.end()) {
        return it->second;  // Return the vector if grade x exists
    } else {
        static const std::vector<std::string> empty;  // Return a reference to an empty vector
        return empty;
    }
    }
    
    
};
}  // namespace grade_school

#endif // GRADE_SCHOOL_H