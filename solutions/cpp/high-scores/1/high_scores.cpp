#include "high_scores.h"

#include <algorithm>
#include <stdexcept>
namespace arcade {

std::vector<int> HighScores::list_scores() {
    return scores;
}

int HighScores::latest_score() {
    int a=scores.back();
    return a;
}

int HighScores::personal_best() {
    std::vector<int>::iterator it=scores.begin();
    int max=-1;
    while(it!=scores.end()){
        if(max<*it){
            max=*it;
        }
        it++;
    }
    return max;
}

std::vector<int> HighScores::top_three() {
    std::vector<int>v=scores;
    std::sort(v.begin(),v.end(),[](int a,int b){
        return a>b;
    });
    if(v.size()==0){
        throw std::invalid_argument("don't have any values inside the vector");
    }
    if(v.size()==1){
        return v;
    }
    else if(v.size()==2){
        return v;
    }
    return std::vector<int>(v.begin(),v.begin()+3);
    

}

}  // namespace arcade
