// eat_ghost returns a boolean value if Pac-Man is able to eat the ghost.
// The function should return true only if Pac-Man has a power pellet active
// and is touching a ghost.
bool can_eat_ghost(const bool & power_pellet_active,const bool & touching_ghost) {
    if(power_pellet_active&&touching_ghost){
        return true;
    }
    return false;
    
}

// score returns a boolean value if Pac-Man scored.
// The function should return true if Pac-Man is touching a power pellet or a
// dot.
bool scored(const bool & touching_power_pellet,const bool & touching_dot) {
    if(touching_power_pellet||touching_dot){
        return true;
    }
    return false;
}

// lost returns a boolean value if Pac-Man loses.
// The function should return true if Pac-Man is touching a ghost and
// does not have a power pellet active.
bool lost( const bool & power_pellet_active, const bool & touching_ghost) {
    if(!power_pellet_active&&touching_ghost){
        return true;
    }
    return false;
}

// won returns a boolean value if Pac-Man wins.
// The function should return true if Pac-Man
// has eaten all of the dots and has not lost
bool won(const bool & has_eaten_all_dots, const bool & power_pellet_active,
         const bool & touching_ghost) {
    if(has_eaten_all_dots&&power_pellet_active&&touching_ghost){
        return true;
    }
    if(has_eaten_all_dots&&!touching_ghost){
        return true;
    }
    
    return false;
}