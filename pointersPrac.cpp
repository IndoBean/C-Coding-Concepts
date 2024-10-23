// #include <iostream>

// using namespace std;

// void arrayPrint(int *ptr) {
//     for(int i = 0; i < 5; i++ ) {
//         cout << "value at location " << i << " is " << ptr[i] << endl;
//     }
// }

// int main() {
//     int myArray[5] = {10, 20, 30, 40, 50};

//     arrayPrint(myArray);
// }



// #include <iostream>

// using namespace std;

// void cubeByPointer(int *ptr) {
//     *ptr = *ptr * *ptr * *ptr;
// }

// int main() {
//     int x = 2;
//     int *ptrX = &x;

//     cubeByPointer(ptrX);
//     cout << "2 cubed is " << *ptrX << endl;
// }


#include <iostream>

using namespace std;

int main() {
    
int y = 42;
int x = 5;
int *ptr2Y;

ptr2Y = &y;
cout << endl << endl << "the value of x is " << x << endl;
cout << "the value of y is " << y << endl;
cout << "the value of ptr2Y is " << ptr2Y << endl;
cout << "the value pointed to by ptr2Y is " << *ptr2Y << endl;

}