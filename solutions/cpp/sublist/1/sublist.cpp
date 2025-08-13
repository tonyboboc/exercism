#include "sublist.h"
#include <algorithm>
namespace sublist {

List_comparison sublist(const std::vector<int>& a,const std::vector<int>&b){
    if(a.size()<b.size()){
        if(std::search(b.begin(),b.end(),a.begin(),a.end())!=b.end()){
            return List_comparison::sublist;
        }
    }
    else if(a.size()>b.size()){
        if(std::search(a.begin(),a.end(),b.begin(),b.end())!=a.end()){
            return List_comparison::superlist;
        }
    }
    else{
        if(a==b){
            return List_comparison::equal;
        }
    }
    return List_comparison::unequal;
}
}  // namespace sublist
