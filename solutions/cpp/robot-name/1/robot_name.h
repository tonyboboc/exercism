#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H
#include <iostream>
#include <set>
#include <string>
#include <cstdlib>
#include <ctime>

namespace robot_name {
class robot {
   private :
    std::string gname;
    public:
    
static std::set<std::string> mata;
    robot (){

        int k=mata.size();
        
        char s1=rand()%26+65;
        this->gname+=s1;
        s1=rand()%26+65;
        this->gname+=s1;
        s1=rand()%10+48;
        this->gname+=s1;
        s1=rand()%10+48;
        this->gname+=s1;
        s1=rand()%10+48;
        this->gname+=s1;
        mata.insert(gname);
        int z=mata.size();
        while(z==k){
            gname.erase();
            create();
            z=mata.size();
                
        }
  
    }
    void create (){
        
        int k=mata.size();
        
        char s1=rand()%26+65;
        this->gname+=s1;
        s1=rand()%26+65;
        this->gname+=s1;
        s1=rand()%10+48;
        this->gname+=s1;
        s1=rand()%10+48;
        this->gname+=s1;
        s1=rand()%10+48;
        this->gname+=s1;
        mata.insert(gname);
        int z=mata.size();
        while(z==k){
            gname.erase();
            create();
            z=mata.size();
                
        }
        }

    std::string name() const{
        
        return this->gname;
    }
    int length() const {
        return this->gname.size();
    }
    void reset (){
        int k=mata.size();
        gname.erase();
        create();
        mata.insert(gname);
        int z=mata.size();
        while(z==k){
            gname.erase();
            create();
            z=mata.size();
        }
    }
    
};


}  // namespace robot_name

#endif // ROBOT_NAME_H