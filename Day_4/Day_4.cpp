//
// Created by Krish on 16-09-2024.
// Understand Patterns related Problem
//

#include <iostream>
using namespace std;

// Square Pattern
// int main() {
//     int n = 7;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//
//
//     for(int i = 1; i <= n; i++) {
//         char ch = 'A';
//         for(int j = 1; j <= n; j++) {
//             cout << ch;
//             ch = ch + 1; // 65 + 1 = 66 => 'B'
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 123
// 456
// 789
// int main() {
//     int n = 3;
//     int x = 1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << x;
//             x += 1;
//         }
//         cout << endl;
//     }
//
//     cout << endl;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << ch;
//             ch += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Triangle Pattern
// int main() {
//     // *
//     // **
//     // ***
//     // ****
//     int n = 4;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//
//     cout << endl;
//
//     // 1
//     // 22
//     // 333
//     // 4444
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//
//     cout << endl;
//
//     // A
//     // BB
//     // CCC
//     // DDDD
//     char ch = 'A';
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << ch;
//         }
//         ch += 1;
//         cout << endl;
//     }
//     return 0;
// }


//Triangle pattern
// int main() {
//     int n = 4;
//
//     // 1
//     // 21
//     // 321
//     // 4321
//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j>0 ; j--) {
//             cout << j;
//         }
//         cout << endl;
//     }
//
//     cout << endl;
//
//     // Floyd's Algo.
//     // 1
//     // 2 3
//     // 4 5 6
//     // 7 8 9 10
//     int x = 1;
//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j>0 ; j--) {
//             cout << x << ' ';
//             x += 1;
//         }
//         cout << endl;
//     }
//
//     cout << endl;
//
//     // 1111
//     //  222
//     //   33
//     //    4
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i; j++) {
//             cout << ' ';
//         }
//         for(int j = 0; j < n-i; j++) {
//             cout << i+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }



int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    //    1
    //   121
    //  12321
    // 1234321

    for(int i = 0; i < n; i++) {
        // Print leading spaces
        for(int j = 0; j < n - i; j++) {
            cout << ' ';
        }

        // Print increasing numbers
        for(int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line
        cout << endl;
    }


    // Hollow star Pattern Problem
    // Butterfly pattern

    return 0;
}
