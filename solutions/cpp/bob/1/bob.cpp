#include "bob.h"

namespace bob {

// TODO: add your solution here
 std::string hey (std::string_view s){
     int up=0,down=0,digit=0,otherstuff=0,idc=0;
    for(char ch: s){
        if(std::isupper(ch)){
            up++;
        }
        if(std::islower(ch)){
            down++;
        }
        if(std::isdigit(ch)){
            digit++;
        }
        if(ch=='?'){idc++;}
        if(ch==')'||ch=='('){otherstuff++;}
    }if(down==0 &&up==0&&digit==0&&otherstuff==0){return "Fine. Be that way!";}
    if(down==0 && s.back()=='?'&&digit==0&&otherstuff==0){return "Calm down, I know what I'm doing!";}
     if(s.back()=='?'){return "Sure.";} 
     
     if(down==0&&up!=0){return "Whoa, chill out!";}
    if(idc!=0&&s.back()==' '){return"Sure.";}
     
     return "Whatever.";
 }
}  // namespace bob
