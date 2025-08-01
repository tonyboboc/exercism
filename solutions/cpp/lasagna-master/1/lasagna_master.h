#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
int preparationTime(std::vector<std::string>& layers,int x=2);
amount quantities(std::vector<std::string>& layers);
void addSecretIngredient(std::vector<std::string>& my,const std::vector<std::string>& friendsList);
std::vector<double> scaleRecipe(const std::vector<double>& quantities,int x);
void addSecretIngredient(std::vector<std::string>& my,std::string auntie);
}  // namespace lasagna_master
