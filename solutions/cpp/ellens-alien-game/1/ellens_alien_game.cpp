namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
    private:
        int health; 
    public:
        int x_coordinate;
        int y_coordinate;
        int get_health(){
            return health;
        }
        Alien(int x,int y){
            x_coordinate=x;
            y_coordinate=y;
            health=3;
        }
        bool hit(){
            if(health>=1){
                health=health-1;
            }
            return true;
        }
        bool is_alive(){
            if(health>=1){
                return true;
            }
            else{
                return false;
            }
        }
        bool teleport(int x,int y){
            x_coordinate=x;
            y_coordinate=y;
            return true;
        }
        bool collision_detection(Alien &b){
            if (x_coordinate==b.x_coordinate&&y_coordinate==b.y_coordinate){
                return true;
            }
            else{return false;}
            
        }
    };
}  // namespace targets