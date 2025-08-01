#include "vehicle_purchase.h"
#include <iostream>
#include <string>
namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        if (kind == "car" || kind == "truck"){
            return true;
        }
        return false;
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        if(option1<option2){
            return option1+" is clearly the better choice.";
        }
        else{
            return option2+" is clearly the better choice.";
        }
        return "not yet implemented";
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        if(age<3){
            return original_price-(original_price*20/double(100));
        }
        else if(age>=10){
            return original_price-(original_price*50/double(100));
        }
        else{
            return original_price-(original_price*30/double(100));
        }
        return 0.0;
    }

}  // namespace vehicle_purchase