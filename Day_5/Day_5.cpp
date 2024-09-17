//
// Created by Krish on 17-09-2024.
// Function in c++
//

#include <iostream>
using namespace std;

// Base Syntax:
// returnType Fun_Name() {
//   do some work;
// }
//
// returnType fun_name(Type p1, Type p2) {
//    do some work;
// }

int printHello() {     // If function not return anything we write there void.
    cout << "Hello World!" << endl;
    return 4;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int val = printHello();   // calling fun.
    cout << val << endl;

    // another way
    // cout << printHello() << endl;

    cout << "Sum: " << sum(1, 2) << endl;

    return 0;
}