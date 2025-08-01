#include "word_count.h"

namespace word_count {

std::map <std::string,int> words (std::string  s){
     char* cstr=&s[0];
    std::map<std::string,int> word;
    const char* delims = " ,.!?;:\n\"\t@$%^&";
    char* token=strtok(cstr,delims);
    while(token !=NULL){
        char* apos=std::strchr(token, '\'');
        std::string s1=token;
        if(apos){
            
            
                if (!s1.empty() && s1.front() == '\'') s1.erase(0, 1);
                if (!s1.empty() && s1.back() == '\'') s1.pop_back();
            
        }
        for (char& c : s1)
            c = std::tolower(static_cast<unsigned char>(c));

        if (!s1.empty())
            word[s1]++;

        token = strtok(NULL, delims);
        
    }
    return word;
    
}

}  // namespace word_count
