#include "isogram.h"

namespace isogram {

bool is_isogram(const std::string & s){
    int arr[26]{0};
    for(char c: s){
        c=(char)tolower(c);
        if(c>=97&&c<=122){
        arr[c-97]++;
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]>1){
            return false;
        }
    }
    return true;
}

}  // namespace isogram
