#include "hexadecimal.h"

namespace hexadecimal {
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
int convert(const std::string &s){
    int q=s.size()-1;
    int ret=0;
    int x;
    for(char c: s){
        if(c>='g'){
            return 0;
        }
        else if(c>='0'&&c<='9'){
            x=int(c-'0');
            ret=ret+x*power(16,q);
            q--;
        }
        else if(c=='a'||c=='A'){
            x=10;
            ret=ret+x*power(16,q);
            q--;
        }
        else if(c=='b'||c=='B'){
            x=11;
            ret=ret+x*power(16,q);
            q--;
        }
        else if(c=='c'||c=='C'){
            x=12;
            ret=ret+x*power(16,q);
            q--;
        }
        else if(c=='d'||c=='D'){
            x=13;
            ret=ret+x*power(16,q);
            q--;
        }
        else if(c=='e'||c=='E'){
            x=14;
            ret=ret+x*power(16,q);
            q--;
        }
        else if(c=='f'||c=='F'){
            x=15;
            ret=ret+x*power(16,q);
            q--;
        }
        else{return 0;}
        
    }
    return ret;
}

}  // namespace hexadecimal
