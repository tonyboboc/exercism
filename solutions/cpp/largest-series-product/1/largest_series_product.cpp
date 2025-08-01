#include "largest_series_product.h"

namespace largest_series_product {
int largest_product(std::string_view s, int&& a ){
    int set=0;
    int size=s.size();
    std::string sub;
    char s1[]="0123456789";
    if(a>size){throw std::domain_error {"fault"};}
    if (a<0){throw std::domain_error {"fault"};}
    int prod;
    for(int i=0;i<size-a+1;i++){
        sub=s.substr(i,a);
        prod=1;
        for(int j=0;j<a;j++){
            prod=prod*(sub[j]-'0');
            if(!strchr(s1,sub[j])){throw std::domain_error {"fault"};}
        }
        set=std::max(set,prod);
    }return set;
}
} // largest_series_product