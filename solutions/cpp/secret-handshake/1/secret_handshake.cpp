#include "secret_handshake.h"


namespace secret_handshake {
std::vector <std::string> commands (int a){
    int z=0;
int p=1;
    while(a!=0){
        z=z+(a%2)*p;
        p=p*10;
    a=a/2;
    }
    std::vector<std::string> v={};  
    int i=0;
    while(z!=0){
        if(i==0&&(z%10)==1){
            v.push_back("wink");
        }
        
        if(i==1&&(z%10)==1){
            v.push_back("double blink");
        }
        if(i==2&&(z%10)==1){
            v.push_back("close your eyes");
        }
        if(i==3&&(z%10)==1){
            v.push_back("jump");
        }
        if(i==4&&(z%10)==1){
            for(long unsigned int j=0;j<v.size()/2;j++){
                long unsigned int n=v.size();
                std::string s;
                s=v[j];
                v[j]=v[n-j-1];
                v[n-j-1]=s;
            }
        }
        z=z/10;
        i=i+1;
    }
return v;

}  // namespace secret_handshake
}
