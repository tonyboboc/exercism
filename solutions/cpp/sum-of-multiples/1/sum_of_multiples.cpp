#include "sum_of_multiples.h"

namespace sum_of_multiples {
int to ( std::vector<unsigned long>&& a,unsigned long && b){
    int size=a.size();
    int sum=0;
    std::unordered_set<int> set;
    for (int i=0;i<size;++i){
        int j=1;
        while(a[i]*j<b){
            set.insert(a[i]*j);
            j++;
        }
    }std::unordered_set<int>::iterator itr;
    for(itr=set.begin();itr!=set.end();++itr){
        sum=sum+*itr;
    }
    return sum;
}
}  // namespace sum_of_multiples
