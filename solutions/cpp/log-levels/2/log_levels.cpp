#include <string>
#include <iostream>
#include <sstream>
namespace log_line {
    std::string message(std::string line) {
        int x =line.find(' ');
        return line.substr(x+1);
    }

    std::string log_level(std::string line) {
        int x=line.find('[');
        int y=line.find(']');
        return line.substr(x+1,y-1);
    }

    std::string reformat(std::string line) {
        int x =line.find(' ');
        std::stringstream ss;ss<<line.substr(x+1);
        x=line.find('[');
        int y=line.find(']');
        ss<<' '<<'('<<line.substr(x+1,y-1)<<')';
        return ss.str();
    }
}
