namespace hellmath {
enum class AccountStatus{
    troll,
    guest,
    user,
    mod
};
enum class Action{
    read,
    write,
    remove
};
bool display_post(AccountStatus x ,AccountStatus y){
    if(x!=AccountStatus::troll){
        return true;
    }
    else if (x==AccountStatus::troll&&y==AccountStatus::troll){
        return true;
    }
    else{
        return false;
    }
}
bool permission_check(Action y ,AccountStatus x){
    switch(x){
        case AccountStatus::troll:
            switch(y){
                case Action::read: return true;
                case Action::write :return true;
                case Action::remove:return false;
            }
            break;
        case AccountStatus::guest: 
            switch(y){
            case Action::read:return true;
            default :return false;
            }
            break;
        case AccountStatus::user:
            switch(y){
                case Action::read: return true;
                case Action::write :return true;
                case Action::remove:return false;
            }
            break;
        case AccountStatus::mod:return true;
    } 
    return false;
}
bool valid_player_combination(AccountStatus x ,AccountStatus y){
    if(x==AccountStatus::troll&&y==AccountStatus::troll){
        return true;
    }
        else if(x==AccountStatus::guest||y==AccountStatus::guest){
            return false;
        }
    else if((x==AccountStatus::troll&&y!=AccountStatus::troll)||(x!=AccountStatus::troll&&y==AccountStatus::troll)){
        return false;
    }
    else{return true;}
}
bool has_priority (AccountStatus x ,AccountStatus y){
    switch(x){
        case AccountStatus::troll:

                return false;
            
            break;
        case AccountStatus::guest: 
            switch(y){
            case AccountStatus::troll :return true;
                
            default :return false; 
                
            }
            break;
        case AccountStatus::user:
            switch(y){
                case AccountStatus::troll: return true;break;
                case AccountStatus::guest:return true;
                default :return false;
            }
            break;
        case AccountStatus::mod:
            switch(y){
                case AccountStatus::mod: return false;
                default:return true;
            }
            break;
        default :return false;
    }
}
// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.


}  // namespace hellmath