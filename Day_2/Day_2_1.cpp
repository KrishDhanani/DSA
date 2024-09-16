// Type casting & Convertion; Take User Input, Operator; 

#include <iostream>
using namespace std;

int main(){

    // Implicit Type 'Conversion'(going small size of dataType to big size of dataType)
    char grade = 'a'; //97 return bcs of ASCII value
    int value = grade;
    cout << value << endl;


    // Explicit Type 'Casting'(This was Done by programmer manually)(going 'big' size of dataType to 'small' size of dataType)
    double price = 202.2;
    int newPrice = (int)price;
    cout << newPrice << endl;


    // Taking User Input
    int age;
    // cout << age << endl;    // Print there randomgarbage value;
    cout << "Enter Age: " << endl;
    cin >> age;

    cout << "Your Age is: " << age << endl;

    int ans = (5 / (double)2);
    cout << ans << endl;
    return 0;
}

// Operator:
// Arithmatic: +,-,*,/,%
// Relational: <,<=,>,>=,==,!=
// Logical: ||(OR), &&(AND), !(NOT)
// Unary: ++(Increment), --(Decrement)