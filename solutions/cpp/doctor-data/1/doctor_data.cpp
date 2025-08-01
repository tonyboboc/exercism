// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"
std::string heaven::get_older_bob(heaven::Vessel x,heaven::Vessel y ){
    if(x.generation<=y.generation){
        return x.s;
    }
    else{return x.s;}
}
bool heaven::in_the_same_system (heaven::Vessel x,heaven::Vessel y ){
    if(x.current_system==y.current_system){
        return true;
    }
else{return false;}
}