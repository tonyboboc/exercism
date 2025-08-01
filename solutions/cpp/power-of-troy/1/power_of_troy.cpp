#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& x,std::string& s){
x.possession=std::make_unique<artifact>(s);

}
    void exchange_artifacts( std::unique_ptr<artifact>& x,  std::unique_ptr<artifact>& y){
          auto z=std::move(x);
            x=std::move(y);
        y=std::move(z);
}
    void manifest_power (human & x, const std::string & s){
    x.own_power=std::make_unique<power>(s);

}
    void use_power (human & x , human & y){
        y.influenced_by=x.own_power;
    }
    int power_intensity(human & x){return x.own_power.use_count();}
}  // namespace troy
