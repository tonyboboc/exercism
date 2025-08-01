#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H
#include <iostream>
#include <string>
namespace space_age {
class space_age{
      public:
        long sec;
        space_age (long x){
            sec=x;
        }
        long seconds()const{
            return sec;
        }
        double on_earth() const {
            return static_cast<double>(sec)/31557600;
        }
        double on_venus() const{
            return (static_cast<double>(sec)/31557600)/0.61519726;
        }
        double on_mercury() const{
            return (static_cast<double>(sec)/31557600)/0.2408467;
        }
        double on_mars() const{
            return (static_cast<double>(sec)/31557600)/	1.8808158;
        }
        double on_jupiter() const{
            return (static_cast<double>(sec)/31557600)/	11.862615;
        }
        double on_saturn() const{
            return (static_cast<double>(sec)/31557600)/		29.447498;
        }
        double on_uranus() const{
            return (static_cast<double>(sec)/31557600)/	84.016846;
        }
        double on_neptune() const{
            return (static_cast<double>(sec)/31557600)/		164.79132;
        }
    };
        
}  // namespace space_age

#endif // SPACE_AGE_H