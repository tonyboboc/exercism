#include "two_fer.h"

namespace two_fer
{
std::string two_fer(){
return "One for you, one for me."; 
}
std::string two_fer(std::string s){
    return "One for "+s +", one for me.";
}
} // namespace two_fer

