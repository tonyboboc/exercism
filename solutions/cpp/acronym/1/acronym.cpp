#include "acronym.h"

namespace acronym {

// TODO: add your solution here
std::string acronym(const std::string & s){
   std::string result;
    const std::string delim = " -_,\"";
    bool next=true;
    for(const char & c:s){
        if(delim.find(c)!= std::string::npos){
            next=true;
        }
        else if(next){
            result+=std::toupper(c);
            next=false;
        }
    }
    return result;
}
}  // namespace acronym
