#include "resistor_color.h"

namespace resistor_color {
const std::map<std::string,int>& getmap(){
    static const std::map<std::string,int> map={{"black",0},{"brown",1},{"red",2},{"orange",3},{"yellow",4},{"green",5},{"blue",6},{"violet",7},{"grey",8},{"white",9}};
    return map;
}
// TODO: add your solution here
int color_code(const std::string & s){
    const std::map<std::string,int>& map=getmap();
    return map.at(s);
}
    std::vector<std::string> colors(){
       return {
        "black", "brown", "red", "orange", "yellow",
        "green", "blue", "violet", "grey", "white"
    };
    }
}  // namespace resistor_color
