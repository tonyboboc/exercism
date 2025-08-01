#include "lasagna_master.h"
namespace lasagna_master {
int preparationTime(std::vector<std::string>& layers,int x){
    int q=layers.size();
    return q*x;
}
amount quantities(std::vector<std::string>& layers){
    amount x;
    x.noodles=0;
    x.sauce=0.0;
    int size=layers.size();
    for(int  i=0;i<size;i++){
        if(layers.at(i)=="noodles"){x.noodles=x.noodles+50;}
        if(layers.at(i)=="sauce"){x.sauce=x.sauce+0.2;}
    }
    return x;
}
void addSecretIngredient(std::vector<std::string>& my,const std::vector<std::string>& friendsList){
    my.back()=friendsList.back();
}
 std::vector<double> scaleRecipe(const std::vector<double>& quantities,int x){
    std::vector<double> y;
int size=quantities.size();
     for( int i=0;i<size;i++){
         double q=quantities[i]/2;
         y.push_back(q*x);
     }
     return y;
}
void addSecretIngredient(std::vector<std::string>& my, std::string auntie){
    my.back()=auntie;
}
}  // namespace lasagna_master
