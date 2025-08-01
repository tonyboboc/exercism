#include <string>

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
        std::string a=line.substr(x+1);
        x=line.find('[');
        int y=line.find(']');
        std::string b=line.substr(x+1,y-1);
        std::string z=a+' '+'('+b+')';
        return z;
    }
}
