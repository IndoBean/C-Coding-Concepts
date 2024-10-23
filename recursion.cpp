#include <iostream>
using namespace std;
//recusion = a programming technique where a function invokes itself from WITHIN
//PROS: less code and is cleaner.
//      useful for  sorting and searching algothrithms
//CONS: uses more memory and is SLOWER

// void walk(int steps);

// // void walk(int steps) { //iterative
// //     for(int i = 0; i < steps; i++) {
// //         cout << "You take a step!\n";
// //     }
// // }

// void walk(int steps) { //recursive
//     if(steps > 0) {
//         cout << "You take a step!\n";
//         walk(steps - 1);
//     }
// }

// int main() {

//     walk(100);

//     return 0;

// }



int factorial (int num);

// int factorial(int num) { //iterative
//     int result = 1;
//     for(int i = 1; i <= num; i++) {
//         result = result * i;
//     }
//     return result;
// }

int factorial(int num) { //recursive
    if(num > 1) {
        return num * factorial(num - 1);
    }
    else {
        return 1;
    }
}

int main () {

    cout << factorial(5);
}