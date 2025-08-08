#pragma once
#include <utility>
#include <string>
namespace robot_simulator {
enum class Bearing{
    NORTH,
    SOUTH,
    EAST,
    WEST
};
class Robot{
    private:
    std::pair<int,int> coord;
    Bearing b;
    public:
    Robot(){
        coord.first=0;
        coord.second=0;
        b=Bearing::NORTH;
    }
    Robot(const std::pair<int,int> & p,Bearing bearing ){
        coord=p;
        b=bearing;
    }
    void turn_right(){
     if(b==Bearing::NORTH){
         b=Bearing::EAST;
     }   
        else if(b==Bearing::EAST){
            b=Bearing::SOUTH;
        }
        else if(b==Bearing::SOUTH){
            b=Bearing::WEST;
        }
        else if (b==Bearing::WEST){
            b=Bearing::NORTH;
        }
    }
    void turn_left(){
        if(b==Bearing::NORTH){
         b=Bearing::WEST;
        }
        
        else if(b==Bearing::EAST){
            b=Bearing::NORTH;
        }
        else if(b==Bearing::SOUTH){
            b=Bearing::EAST;
        }
        else if(b==Bearing::WEST){
            b=Bearing::SOUTH;
        }
    }
    void advance(){
        if(b==Bearing::NORTH){
         coord.second++;
        }
        
        else if(b==Bearing::EAST){
            coord.first++;
        }
        else if(b==Bearing::SOUTH){
            coord.second--;
        }
        else{
            coord.first--;
        }
    }
    Bearing get_bearing()const {
        return b;
    }
    std::pair<int,int> get_position()const{
        return coord;
    }
    void execute_sequence(const std::string & s){
        for(const char& c:s){
            if(c=='A'){
                this->advance();
            }
            if(c=='L'){
                this->turn_left();
            }
            if(c=='R'){
                this->turn_right();
            }
        }
    }
    
};

}  // namespace robot_simulator
