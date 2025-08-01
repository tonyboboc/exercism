#include "sieve.h"

namespace sieve {
    std::vector<int> primes (int x){
        std::vector<int> nr;
        bool p[100000];
        memset(p, true, sizeof(p));
        for(int i=2;i<=x;i++){
            if(p[i]==true){
                for(int j=i*i;j<=x;j+=i){
                    p[j]=false;
                }
                nr.push_back(i);
            }
            
        }
        return nr;
    }
}  // namespace sieve
