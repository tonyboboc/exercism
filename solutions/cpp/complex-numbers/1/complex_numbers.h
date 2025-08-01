#if !defined(COMPLEX_NUMBERS_H)
#define COMPLEX_NUMBERS_H
#include <cmath>
namespace complex_numbers {
class Complex{
  private:
    double re;
    double im;
    public:
    Complex(double x,double y){
        re=x;
        im=y;
    }
    double real()const{
        return re;
    }
    double imag()const{
        return im;
    }
    Complex operator *(const Complex& other) const{
        return Complex((re*other.re)-(im*other.im),(re*other.im)+(other.re*im));
    }
    Complex operator +(const Complex& other)const{
        return Complex(re+other.re,im+other.im);
    }
    Complex operator +(const double & x)const{
        return Complex(re+x,im);
    }
    friend Complex operator +(const double & x,const Complex & c){
        return Complex(c.re+x,c.im);
    }
    Complex operator -(const Complex& other)const{
        return Complex(re-other.re,im-other.im);
    }
    Complex operator -(const double & x)const{
        return Complex(re-x,im);
    }
    friend Complex operator -(const double & x,const Complex & c ){
        return Complex(x-c.re,-c.im);
    }
    Complex operator *(const double &x)const{
        return Complex (re*x,im*x);
    }
    friend Complex operator *(const double &x,const Complex & c){
        return Complex(c.re*x,c.im*x);
    }
    Complex operator /(const double & x)const{
        return Complex(re/x,im/x);
    }
   friend Complex operator /(const double &x,const Complex & c){
        return Complex ((x*c.re)/(c.re*c.re+c.im*c.im),-(x*c.im)/(c.re*c.re+c.im*c.im));
    }
    Complex operator /(const Complex& other)const{
        return Complex(((re*other.re)+(im*other.im))/((other.re*other.re)+(other.im*other.im)),(im*other.re-re*other.im)/(other.re*other.re+other.im*other.im));
    }
    double  abs()const{
        return sqrt(re*re+im*im);
    }
    Complex  conj()const{
        return Complex(re,-im);
    }    
    Complex exp()const{
        return Complex(std::exp(re)*cos(im),std::exp(re)*std::sin(im));
    }
};
}  // namespace complex_numbers
#endif  // COMPLEX_NUMBERS_H
