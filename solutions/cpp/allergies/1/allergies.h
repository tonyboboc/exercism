#if !defined(ALLERGIES_H)
#define ALLERGIES_H
 #include <unordered_set>
#include <cmath>
#include <map>
#include <string>
namespace allergies {
class allergy_test {
    private:
    std::map<int, std::string> map = {{0, "eggs"},{1, "peanuts"}, {2, "shellfish"},{3,"strawberries"},{4,"tomatoes"},{5,"chocolate"},{6,"pollen"},{7,"cats"}};
    unsigned int allergies;
    public :
    allergy_test (unsigned int x){
    allergies=x;
    }
bool is_allergic_to(std::string s){
    int x = allergies;
    for(int i=7;i>=0;i--){
        if(pow(2,i)>x){
        if (s==map.at(i)){
            return false;
        }
            continue;
        }
        else{
            if(s==map.at(i)){
                return true;
            }
            else{
                x=x-pow(2,i);
            }
        }
    }
    return false;
}
std::unordered_set<std::string> get_allergies(){
     std::unordered_set<std::string> y;
    int x=allergies;
    x=x%256;
    for(int i=7;i>=0;i--){
        if(pow(2,i)>x){
            continue;
        }
        else {
            y.insert(map.at(i));
            x=x-pow(2,i);
        }
    }
return y;
        
}
};
}  // namespace allergies

#endif // ALLERGIES_H