//
// Created by Krish on 17-09-2024.
//


#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    int sum = 0;
    int d;

    while(n>0) {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    return sum;
}

int factorial(int n) {
    int ans = 1;
    for(int i=1; i<=n; i++) {
        ans = ans * i;
    }
    return ans;
}

int ncr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int y = n - r;
    int fact_y = factorial(y);
    return fact_n  / (fact_r*fact_y);
}

int main() {

    // Calculate sum of digit.
    cout << sum_of_digits(112) << endl;

    cout << ncr(8, 2) << endl;
}