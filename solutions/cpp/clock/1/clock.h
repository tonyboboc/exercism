#if !defined(CLOCK_H)
#define CLOCK_H
#include <iostream>
#include <string>
#include <sstream>
namespace date_independent {
    class clock{
    public:
    int minute;
    int hour;
    clock (int h, int m){
        minute=m;
        hour=h;
    }
    static clock at (int h,int m) {
        h=h+(m/60);
        m=m%60;
        
            h=h%24;
            if(m<0){
                h=h-1;
                m=60+m;
            }
        
        if(h<0){
            h=24+h%24;
            if(m<0){
                h=h-1;
                m=60+m;
            }
        }
        return clock(h,m);
    }
    clock plus (int m){
        
        minute=minute+m;
        hour=hour+(minute/60);
        minute=minute%60;
        if(minute <0){
            hour=hour-1;
            minute=60+minute;
        } 
        
        if(hour<0){
            hour=(hour+24)%24;
        }else{hour=hour%24;}
        return clock(hour,minute);
            
        
    }
    operator std::string() const{
        std::ostringstream ss;
        if(hour<10){
            if(minute<10){
                ss<<"0"<<std::to_string(hour)<<":"<<"0"<<std::to_string(minute);
            }
            else{ss<<"0"<<std::to_string(hour)<<":"<<std::to_string(minute);}
            
        }
        else{if(minute<10){
                ss<<std::to_string(hour)<<":"<<"0"<<std::to_string(minute);
            }
            else{ss<<std::to_string(hour)<<":"<<std::to_string(minute);}}
        return ss.str();
    }
    bool operator ==(const clock o) const{
        return ((this->minute==o.minute)&&(this->hour==o.hour));
    }
    bool operator !=(const clock o) const{
        return ((this->minute!=o.minute)||(this->hour!=o.hour));
    }
    };
}  // namespace date_independent

#endif // CLOCK_H