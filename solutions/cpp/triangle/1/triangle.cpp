#include "triangle.h"

namespace triangle {
    flavor kind(double a,double b,double c){
        if((a+b>=c)&&(b+c>=a)&&(a+c>=b)&&a>0&&b>0&&c>0){
            if((a==b)&&(b==c)){
                return flavor::equilateral;
            }
            else if(a==b){
                return flavor::isosceles;
            }
            
            else if(c==b){
                return flavor::isosceles;
            }
            
            else if(a==c){
                return flavor::isosceles;
            }
            else{return flavor::scalene;}
            
        }
        else{throw std::domain_error("error");}
    
        
    }
}  // namespace triangle
