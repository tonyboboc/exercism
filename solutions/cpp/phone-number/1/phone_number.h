#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H
#include <string>
#include <algorithm>
#include <regex>
#include <stdexcept>
namespace phone_number {
class phone_number{
    private :
    std::string s;
    public:
    phone_number(const std::string & y){
        s=y;
        std::regex pattern("[0-9]+");
        std::string x;
         std::sregex_iterator it(s.begin(), s.end(), pattern);
         std::sregex_iterator end;
        while(it!=end){
            x.append(it->str());
            ++it;
        }
        if(x.size()<10||x.size()>11){throw std::domain_error("to many or to less decimals");}
        if(x.size()==11){
            if((x[0]=='1'||x[0]=='0')){
            x.erase(0,1);}else{throw std::domain_error("invalid phone num");}
            
        }
        
            if(x[0]=='1'||x[0]=='0'||x[3]=='1'||x[3]=='0'){throw std::domain_error("invalid phone num");}
        
        s=x;
        
    }
    std::string number (){
        
        
        
      return s;
    }
        
    
  };
// TODO: add your solution here

}  // namespace phone_number

#endif  // PHONE_NUMBER_H