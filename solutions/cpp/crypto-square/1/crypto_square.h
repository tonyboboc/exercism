#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>
namespace crypto_square {

class cipher{
    private:
    std::string s;
    public:
    cipher(const std::string & s){
        this->s=s;
    }
    std::string normalized_cipher_text(){
        std::string text;
        
        for (char& c : s) {
        c = std::tolower(c); // convert each character to lowercase
    }
        for(char c:s ){
             if (std::isalpha(c)) {
            text+=c;
        } else if (std::isdigit(c)) {
            text+=c;
        } 
        }
        
        if(text.size()==0){return "";}
long unsigned int r;
       long unsigned int c;
        for (r = 1; r <= text.size(); ++r) {
            c = std::ceil((double)text.size() / r);
            if (c >= r && c - r <= 1 && r * c >= text.size()) {
                break;
            }
        }
        std::vector<std::string> vec;
        while(text.size()>c){
            vec.push_back(text.substr(0,c));
            text.erase(0,c);
        }
        while(text.size()<c){
            text+=" ";
        }
        vec.push_back(text);
        text.clear();
        
        for(long unsigned int i=0;i<c;i++){
            for(long unsigned int j=0;j<r;j++){
                text+=vec[j][i];
            }
            if(i<c-1){
                text+=' ';
            }
        }
       
        return text;
        
    }
};

}  // namespace crypto_square
