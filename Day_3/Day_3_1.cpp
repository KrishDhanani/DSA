// Loops


#include <iostream>
using namespace std;

int main(){
    cout << "while loop\n"; 
    // While Loop
    // Printing number 1-5
    int count = 1;
    while( count < 6) {
        cout << count << endl;
        count++;
    }

    cout << "for loop\n";
    // For Loop
    // Printing number 1-5
    for(int i = 0; i <= 5; i++) {
        cout << i << endl;
    }

    cout << "Do while loop\n";
    // Do-While Loop
    // Printing number 1-5
    int c = 0;
    do {
        cout << c << endl;
        count++;
    } while( c > 6);
}