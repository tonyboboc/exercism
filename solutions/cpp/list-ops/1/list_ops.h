#pragma once
#include <vector>
namespace list_ops {
template <typename T> 
    std::vector<T> append(std::vector<T> & left,std::vector<T> right){
          left.insert(left.end(), right.begin(), right.end());
         return left;
    }
 template <typename T> 
    std::vector<T> concat(std::vector<std::vector<T>> vector){
       std::vector<T> vec;

   for(const std::vector<T> & x:vector){ vec.insert(vec.end(),x.begin(),x.end()); }

    return vec;
    }
template <typename T,typename FUNC>
    std::vector<T> filter(std::vector<T> vec, FUNC function ){
        std::vector<T> res;
        for(T x:vec){
            if(function(x)){
                res.push_back(x);
            }
        }
        return res;
    }
template <typename T>
    std::size_t length(std::vector<T> vec){
        return vec.size();
    }
template <typename T,typename FUNC>
    std::vector<T> map(std::vector<T> vec, FUNC function){
        for( T & x:vec){
            x=function(x);
        }
        return vec;
    }
    template <typename T,typename FUNC>
    T foldl (std::vector<T> vec,T value,FUNC function){
        for (T x:vec){
            value=function(value,x);
        }
        return value;
    }
    template <typename T,typename FUNC>
    T foldr(std::vector<T> vec,T value,FUNC function){
          for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
              value=function(value,*it);
          }
        return value;
    }
    template <typename T>
    std::vector<T> reverse(std::vector<T> vec){
        std::vector<T> ret;
        for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
              ret.push_back(*it);
          }
        return ret;
    }
// TODO: add your solution here

}  // namespace list_ops
