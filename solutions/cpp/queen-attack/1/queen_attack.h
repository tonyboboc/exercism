#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <iostream>
#include <utility>
#include <stdexcept>
namespace queen_attack {
class chess_board{
    std::pair<int,int> x;
    std::pair<int,int> y ;
public:
    chess_board(std::pair<int,int>x,std::pair<int,int>y)  {
        if((x.first<0||x.first>=8)||(x.second<0||x.second>=8)||(y.first<0||y.first>=8)||(y.second<0||y.second>=8)||(x.first==y.first&&x.second==y.second)){
            throw std::domain_error("Values aren't correct");
        }
        this->x=x;
        this->y=y;
    }
    std::pair<int,int> white() const{
        return x;
    }
    std::pair<int,int> black() const{
        return y;
    }
    bool can_attack () const {
        if(x.first==y.first){
            return true;
        }
        if(x.second==y.second){
            return true;
        }
        if(x.first>y.first){
            if(x.second>y.second){
                if(x.first-y.first==x.second-y.second){return true;}
            }
            if(x.second<y.second){
                if(x.first-y.first==y.second-x.second){return true;}
            }
        }
        else{
            if(x.second>y.second){
                if(y.first-x.first==x.second-y.second){return true;}
            }
            if(x.second<y.second){
                if(y.first-x.first==y.second-x.second){return true;}
            }
        }
        return false;
    }
};
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H