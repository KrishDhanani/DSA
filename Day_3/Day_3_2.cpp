//
// Created by Krish on 16-09-2024.

#include <iostream>
using namespace std;

int main() {
    int n = 7;
    bool isPrime = true;

    for(int i=2; i * i <= n; i++) {    // before we use there i <= n-1
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout<<"Is Prime Number"<<endl;
    } else {
        cout<<"Not Prime Number"<<endl;
    }
    return 0;
}
// better approach
// Is run for loop till root(n) * root(n)
// because if we find any number factor then it start repeating after some value for identify
// that let's see with example:

// n = 25
// factor: 25
// 25 * 1
// 5 * 5
// 1 * 25
// here start repeating after 5*5

// n = 12
// factor: 12
// 1 * 12
// 2 * 6
// 3 * 4
// ------   starting repeating it self so; 2 to root(12)=3.__ means; loop rotate 2 to 3
// 4 * 3
// 6 * 2
// 12 * 1

// i * i <= n     =>      i^2 <= n        =>  i <= root(n)
// This is better approach in terms of time complexity.
