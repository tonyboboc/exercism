#pragma once

#include <string>
#include <memory>
namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};
class human {
  public:
    std::unique_ptr<artifact> possession=nullptr;
    std::shared_ptr<power> own_power=nullptr;
    std::shared_ptr<power> influenced_by=nullptr;

};
void give_new_artifact(human& x,std::string& s);
void exchange_artifacts( std::unique_ptr<artifact>& x,  std::unique_ptr<artifact>& y);
void manifest_power (human & x, const std::string & s);
    void use_power (human & x , human & y);
int power_intensity(human & x);
}                              // namespace troy
                        