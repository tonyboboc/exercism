#include "difference_of_squares.h"

namespace difference_of_squares {
int square_of_sum(int n){
    n=pow(((n*(n+1))/2),2);
    return n;
}
int sum_of_squares(int n){
    n=(n*(n+1)*(2*n+1))/6;
    return n;
}
int difference (int n){
    int diff;
    int a;
    int b;
    a=pow(((n*(n+1))/2),2);
    b=(n*(n+1)*(2*n+1))/6;
    diff=a-b;
    return diff;
}
}  // namespace difference_of_squares
