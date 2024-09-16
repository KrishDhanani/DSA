// What we do today: Conditional statement and loops; Ternary statement

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age!" << endl;
    cin >> age;

    if( age >= 18) {
        cout << "You can Vote" << endl;
    } else {
        cout << "You can't Vote" << endl;
    }

    cout << "......" << endl;

    if( age%2 == 0 ) {
        cout << "Age is Even" << endl;
    }

    cout << "......" << endl;

    int marks;
    cout << "Enter your marks" << endl;
    cin >> marks;

    if( marks > 90 ) {
        cout << "You got A";
    } else if( marks > 80 && marks <= 90 ) {
        cout << "You got B";
    } else if( marks > 70 && marks <= 80 ) {
        cout << "You got C" << endl;
    } else {
        cout << "You got D" << endl;
    }

    cout << "......" << endl;

    char ch;
    cout << "Enter Character!" << endl;
    cin >> ch;

    if( ch >= 'a' && ch <= 'z') {       // Also U can Compare with ASCII value
        cout << "Enterd char. is in 'LowerCase'" << endl;
    } else if( ch >= 65 && ch <= 90) {  // Here Implicit Type conversion happen so that char. is compare with int.  
        cout << "Enterd char. is in 'UpperCase'" << endl;
    }

    // Ternary statement
    // Condition?str1:str2;

    int n = 90;
    cout << (n >= 0 ? "positive" : "negative") << endl;

    return 0;
}