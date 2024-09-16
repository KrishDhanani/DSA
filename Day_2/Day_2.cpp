// Basic Understanding; Data Type.

#include <iostream>     // It is Preprocessor Directorl.
using namespace std;    // Need to write to run cout or cin detect from which file it was execute.

int main(){     // This is main fun. in which we write our code.
    cout << "Hello" << endl;   // Here endl means next line char. or you can write "\n"
    cout << "Krish" << endl << "Dhanani";
    
    int age = 25;
    cout << age << endl;    // How to write variable that showen here.
    cout << sizeof(age) << endl;    // To know how much space it required to store in memory. BCS of int it answer 4.

    char grade = 'A';   // BCS of it is char we write in single quote.
    cout << grade << endl;

    float PI = 3.14f;   // After write float value need to write suffix "f" if not write compiler will consider it as double value.    
    cout << PI << endl;
    
    bool is_safe = true;
    cout << is_safe << endl;    // true --> 1 & false --> 0

    double price = 100.9;
    cout << price << endl;
    
    return 0;
}


// Run command in terminal firs we compile the program then run that compile file.(First ensure your terminal at right directory)
// For compile: g++ -o code Day_2.cpp
// For run: ./Day_2.exe 

// Data type and Variable:
// You can define variable by starting either "_" or "a-z or A-Z" other all are char. not allow to start variable name.
// 
// Data Type:
// int: 4byte 
// char: 1byte
// float: 4byte
// bool: 1byte
// double: 8bytes