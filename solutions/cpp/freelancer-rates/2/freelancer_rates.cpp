// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>
#include <iostream>
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(const double & hourly_rate) {
   return hourly_rate*8;
    
}

// apply_discount calculates the price after a discount
double apply_discount(const double & before_discount,const  double &discount) {
    return before_discount-(before_discount*discount/100);
    
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(const double & hourly_rate, const double & discount) {
    double monthly=8*hourly_rate*22;
    double y=monthly-(monthly*discount/100);
    int x=std::ceil(y);
    return x;
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(const int & budget, const double & hourly_rate, const double & discount) {
    return std::floor( budget / (hourly_rate * 8 - (hourly_rate * 8 * discount / 100.0)));
    
}