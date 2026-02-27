#include "diamond.h"

namespace diamond {

// TODO: add your solution here
std::vector<std::string> rows(char p){
    int n=p-'A'+1;
    int k=1;
    std::vector<std::string> vec;
    std::string result;
    for(int i=0;i<n;i++){
        result="";
        char c='A'+i;
        if(i==0){
           for(int j=0;j<n-1-i;j++){
               result+=' ';
           }
            result +=c;
            for(int j=0;j<n-1-i;j++){
                result +=' ';
            }
        }
        else{
            for(int j=0;j<n-1-i;j++){
               result+=' ';
           }
            result +=c;
            for(int j=0;j<k;j++){
                result +=' ';
            }
            result +=c;
            for(int j=0;j<n-1-i;j++){
                result +=' ';
            }
            k+=2;
        }
        if(i+1<n){
            vec.insert(vec.begin()+i,2,result);
        }
        else{
            vec.insert(vec.begin()+i,1,result);
        }
    }
    return vec;
}
}  // namespace diamond
