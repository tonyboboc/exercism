#include "matching_brackets.h"

namespace matching_brackets {

bool check (std::string_view s){

    std::stack<char>stk;
    for(const char & c:s ){
         if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if(stk.empty()){return false;}
             
        
        char top = stk.top();
        if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {return false;}
        stk.pop();
        }
    }
    if(!stk.empty()){return false;}
    return true;
   
    
}
}

  // namespace matching_brackets
