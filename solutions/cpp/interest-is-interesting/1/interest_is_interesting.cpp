// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    if(balance<0){
        return 3.213;
    }
    else if(balance<1000){
        return 0.5;
    }
    else if(balance<5000){
        return 1.621;
    }
    else{
        return 2.475;
    }
    
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    if(balance<0){
        return 0.03213*double(balance);
    }
    else if(balance<1000){
        return double(0.005)*double(balance);
    }
    else if(balance<5000){
        return 0.01621*double(balance);
    }
    else{
        return 0.02475*double(balance);
    }
    
    return 0.0;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    if(balance<0){
        return balance+(0.03213*double(balance));
    }
    else if(balance<1000){
        return balance+(double(0.005)*double(balance));
    }
    else if(balance<5000){
        return balance+(0.01621*double(balance));
    }
    else{
        return balance+(0.02475*double(balance));
    }
    return 0.0;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {\
    int i=0;
    while(balance<target_balance){
        if(balance<0){
        balance= balance+(0.03213*double(balance));
    }
    else if(balance<1000){
        balance= balance+(double(0.005)*double(balance));
    }
    else if(balance<5000){
        balance= balance+(0.01621*double(balance));
    }
    else{
        balance= balance+(0.02475*double(balance));
    }
        i++;
    }
    return i ;
}