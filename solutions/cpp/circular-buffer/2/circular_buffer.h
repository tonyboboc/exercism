#pragma once
#include  <deque>
#include <stdexcept>
namespace circular_buffer {

template <typename T>
class circular_buffer {
    std::deque<T> vec;
    long unsigned int size;
    
    public :
    circular_buffer (int x){
        size=x;
    }
    T read(){
        if(vec.empty()){
            throw std::domain_error ("buffer empty");
        }
        
            T x= *vec.begin();
            vec.pop_front();
            return x;
        
    }
    void write (T x){
        if(vec.size()==size){
            throw std::domain_error ("buffer full");
        }
        vec.push_back(x);
        
    }
    void clear (){
        vec.clear();
    }
    void overwrite (T x){
        if(vec.size()==size){
        vec.pop_front();
        vec.push_back(x);
        }
        else{
            vec.push_back(x);
        }
    }
};

}  // namespace circular_buffe
