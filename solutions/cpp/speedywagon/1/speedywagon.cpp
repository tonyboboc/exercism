#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}
bool connection_check (pillar_men_sensor * p){
    if(p==nullptr){
        return false;
    }
    return true;
}
int activity_counter (pillar_men_sensor* p,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=(p+i)->activity+sum;
    }
    return sum;
}
bool alarm_control(pillar_men_sensor* p){
    if(p==nullptr){
        return false;
    }
    if(p->activity>0){
        return true;
    }
    return false;
}
bool uv_alarm (pillar_men_sensor* p ){
    if(p==nullptr){return false;}
    int data=uv_light_heuristic(&(p->data));
    if(data>p->activity){return true;}
    return false;
}    
}  // namespace speedywagon
