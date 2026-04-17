#include "resistor_color_duo.h"

namespace resistor_color_duo {
const std::map<std::string,int>& getmap(){
    static const std::map<std::string,int> map={{"black",0},{"brown",1},{"red",2},{"orange",3},{"yellow",4},{"green",5},{"blue",6},{"violet",7},{"grey",8},{"white",9}};
    return map;
}
    int value (const std::vector<std::string> & v){
        const std::map<std::string,int>& map=getmap();
        size_t n=v.size();
        int fvalue=0;
        for(size_t i=0;i<n;i++){
            if(i>=2){break;}
            fvalue=fvalue*10+map.at(v.at(i));
        }
        return fvalue;
    }
// TODO: add your solution here

}  // namespace resistor_color_duo
