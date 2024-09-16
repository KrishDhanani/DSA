// There is also nested loop concept there.
// Created by Krish on 16-09-2024.

#include <iostream>
using namespace std;

// int main() {
//     // Example of how to use nested loop
//     int n = 10;
//     for (int i=0; i<n; i++) {  // Line
//         int m = 5;
//         for (int j=0; j<=m; j++) {  // how many star
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// // H.W. => Sum of all 1 to N number which are divisible by 3.
// int main() {
//     int n = 6;
//     int ans = 1;
//     for (int i = 1 ; i <= n; i++) {
//         if (i % 3 == 0) {
//             ans = ans * i;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }


// H.W. => Print factorial of N.
int main() {
    int n = 5;
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans = ans * i;
    }
    cout << ans << endl;
    return 0;
}