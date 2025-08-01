#include "roman_numerals.h"

namespace roman_numerals {
    std::map <int , std::string> units{{1,"I"},{2,"II"},{3,"III"},{4,"IV"},{5,"V"},{6,"VI"},{7,"VII"},{8,"VIII"},{9,"IX"}};
    std::map <int , std::string> tens{{1,"X"},{2,"XX"},{3,"XXX"},{4,"XL"},{5,"L"},{6,"LX"},{7,"LXX"},{8,"LXXX"},{9,"XC"}};
    std::map <int , std::string> hundreds {{1,"C"},{2,"CC"},{3,"CCC"},{4,"CD"},{5,"D"},{6,"DC"},{7,"DCC"},{8,"DCCC"},{9,"CM"}};
    std::map <int , std::string> thousands{{1,"M"},{2,"MM"},{3,"MMM"}};
    std::string convert(int x){
        int i=1;
        std::string s;
        while(x!=0){
            if(i==1){
                if(x%10!=0){
                s.insert(0,units.at(x%10));
                }
            }
            if(i==2){
                if(x%10!=0){
                s.insert(0,tens.at(x%10));
                }
            }
            if(i==3){
                if(x%10!=0){
                s.insert(0,hundreds.at(x%10));
                }
            }
            if(i==4){
                if(x%10!=0){
                s.insert(0,thousands.at(x%10));
                }
            }
            x=x/10;
            i++;
        }
        return s;
    }
}  // namespace roman_numerals
