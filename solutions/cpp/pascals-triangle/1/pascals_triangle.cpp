#include "pascals_triangle.h"

namespace pascals_triangle {

// TODO: add your solution here
std::vector<std::vector<int>> generate_rows(int x){
    std::vector<std::vector<int>> vec;
    vec.resize(x);
    if(x==0){
        return vec;
    }
    else if(x==1){
        vec[0].push_back(1);
        return vec;
    }
        vec[0].push_back(1);
        vec[1].push_back(1);
        vec[1].push_back(1);
    
    for(int i=2;i<x;i++){
        for(int j=0;j<=i;j++){
          if(j==0){
              vec[i].push_back(vec[i-1][j]);
          }
            else if(j==i){
                vec[i].push_back(vec[i-1][j-1]);
            }
            else{
                int x =vec[i-1][j]+vec[i-1][j-1];
                vec[i].push_back(x);
            }
            
        }
    }
    return vec;
    
}
}  // namespace pascals_triangle
