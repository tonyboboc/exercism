#include "say.h"
namespace say {
long long intPowerOf10(int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= 10;
    }
    return result;
}
std::string idk(long long num){
std::string s;
    if(num==1){s= "one";}
    else if(num==2){s= "two";}
    else if(num==3){s= "three";}
    else if(num==4){s= "four";}
    else if(num==5){s="five";}
    else if(num==6){s= "six";}
    else if(num==7){s="seven";}
    else if(num==8){s= "eight";}
    else if(num==9){s= "nine";}
    else if(num==10){s= "ten";}
    else if(num==11){s= "eleven";}
    else if(num==12){s= "twelve";}
    else if(num==13){s= "thirteen";}
    else if(num==14){s= "fourteen";}
    else if(num==15){s= "fifteen";}
    else if (num==16){s= "sixteen";}
    else if(num==17){s= "seventeen";}
    else if(num==18){s= "eighteen";}
    else if(num==19){s= "nineteen";}
    else if(num==20){s= "twenty";}
    else if (num==30){s= "thirty";}
    else if(num==40){s= "forty";}
    else if(num==50){s= "fifty";}
    else if(num==60){s= "sixty";}
    else if(num==70){s= "seventy";}
    else if(num==80){s= "eighty";}
    else if(num==90){s= "ninety";}
    else if(num>=21&&num<=29){
    s="twenty-"+idk(num%10);
    }
    else if(num>=31&&num<=39){
    s="thirty-"+idk(num%10);
    }
    else if(num>=41&&num<=49){
        s="forty-"+idk(num%10);
    }
    else if(num>=51&&num<=59){
        s="fifty-"+idk(num%10);
    }
    else if(num>=61&&num<=69){
        s="sixty-"+idk(num%10);
    }
    else if(num>=71&&num<=79){
        s="seventy-"+idk(num%10);
    }
    else if(num>=81&&num<=89){
        s="eighty-"+idk(num%10);
    }
    else if(num>=91&&num<=99){
        s="ninety-"+idk(num%10);
    }
    else if(num>=100&&num<=999){
        if(num%100!=0){
        s=idk(num/100)+" hundred "+idk(num%100);
        }
        else {s=idk(num/100)+" hundred";}
    }
    return s;
}
std::string in_english( long long num){
    if(num==0){
    return "zero";
    }
    else if(num>=1000000000000){
        throw std::domain_error("No variables allow that are less than zero");
        
    }
    else if (num<0){
        throw std::domain_error("No variables allow that are less than zero");
    }
    std::string finals;int k=0;
    std::cout<<num<<" " ;
    long long z=num;
    std::cout<<z<<" ";
    while(num!=0){
        num=num/10;
        k++;
    }
    while(k>0){
        std::string s;
        if(k%3!=0&&k>=4){
            int m=k%3;
            long long q=z/intPowerOf10(k-m);
            std::cout<<intPowerOf10(k-m)<<std::endl;
            std::cout<<z<<" "<<q<<" "<<k<<" "<<m<<std::endl;
            z=z-(q*intPowerOf10(k-m));
            s=idk(q);
            if(k>9&&q!=0&&z!=0){
                s=s+" billion ";
            }
            else if(k>9&&q!=0){
                s=s+" billion";
            }
            else if( k>6&&q!=0&&z!=0){
                s=s+" million ";
            }
            else if(k>6&&q!=0){
                s=s+" million";
            }
            else if (k>3&&q!=0&&z!=0){
            s=s+ " thousand ";
            }
            else if(k>3&&q!=0){
                s=s+" thousand";
            }
            finals=finals+s;
            k=k-m;
            std::cout<<"current k : "<<z<<" "<<k<<std::endl;

        }
        else if (k%3==0&&k>=4){
            
            long long q=z/intPowerOf10(k-3);
            z=z-q*intPowerOf10(k-3);
            std::cout<<z<<" "<<q<<" "<<k<<" "<<std::endl;
            s=idk(q);
            if(k>9&&q!=0&&z!=0){
                s=s+" billion ";
            }
            else if(k>9&&q!=0){
                s=s+" billion";
            }
            else if( k>6&&q!=0&&z!=0){
                s=s+" million ";
            }
            else if(k>6&&q!=0){
                s=s+" million";
            }
            else if (k>3&&q!=0&&z!=0){
            s=s+ " thousand ";
            }
            else if(k>3&&q!=0){
                s=s+" thousand";
            }
            finals=finals+s;
            k=k-3;
            std::cout<<"current k : "<<z<<" "<<k<<std::endl;
        }
        if (k<=3) {
            long long q=z;
            z=0;
            s=idk(q);
            if(k>9&&q!=0&&z!=0){
                s=s+" billion ";
            }
            else if(k>9&&q!=0){
                s=s+" billion";
            }
            else if( k>6&&q!=0&&z!=0){
                s=s+" million ";
            }
            else if(k>6&&q!=0){
                s=s+" million";
            }
            else if (k>3&&q!=0&&z!=0){
            s=s+ " thousand ";
            }
            else if(k>3&&q!=0){
                s=s+" thousand";
            }
            finals=finals+s;
            std::cout<<"current k : "<<z<<" "<<k<<std::endl;
            k=k-3;
            
            
        }
    }
return finals; 
}

}// namespace say
