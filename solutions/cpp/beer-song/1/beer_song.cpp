#include "beer_song.h"

namespace beer_song {
std::string verse (int number){
    if(number==0){
        return "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n";
    }
    if (number==1){
        return "1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n";
    }
    if (number==2){
        return "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n";
    }
    
        return std::to_string(number)+" bottles of beer on the wall, "+std::to_string(number)+" bottles of beer.\n"+"Take one down and pass it around, "+std::to_string(number-1)+" bottles of beer on the wall.\n";
    
}
    std::string sing(int bottle1,int bottle2){
    std::ostringstream s;
    
    for(int number=bottle1;number>=bottle2;number--){
        if(number==0){
        s<< "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n";
    }
    if (number==1){
        s<< "1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n";
        if(number!=bottle2){s<<'\n';}
    }
    if (number==2){
        s<< "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n";if(number!=bottle2){s<<'\n';}
    }
        if(number>=3){s<<std::to_string(number)<<" bottles of beer on the wall, "<<std::to_string(number)<<" bottles of beer.\n"<<"Take one down and pass it around, "+std::to_string(number-1)<<" bottles of beer on the wall.\n";if(number!=bottle2){s<<'\n';}}
    } 
   
    return s.str();
}
}  // namespace beer_song
