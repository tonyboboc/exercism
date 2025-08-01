// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include <iostream>
#include <string>
namespace star_map{
    enum  class System{
        BetaHydri,
        EpsilonEridani,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
    
}
namespace heaven{

    class Vessel{
    public:
        int x;
        star_map::System current_system=star_map::System::Sol;
        int generation;
        std::string s;
        int busters=0;
        Vessel(std::string s,int x){
            this->x=x;
            this->s=s;
        }
        Vessel(std::string s,int x,star_map::System z){
            this->x=x;
            this->s=s;
            current_system=z;
        }
        Vessel replicate (std::string mata){
            Vessel y=*this;
            y.s=mata;
            
            y.generation=y.generation+2;
            return y;
        }
        void make_buster(){
            busters=1;
        }
        bool shoot_buster(){
            if(busters>=1){
                busters--;return true;
            }
            else{return false;}
        }
    };
std::string get_older_bob(heaven::Vessel x,heaven::Vessel y );
    bool in_the_same_system (heaven::Vessel x,heaven::Vessel y );
}

