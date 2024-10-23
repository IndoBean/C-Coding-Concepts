#include <iostream>

using namespace std;

int main() {

    string name = "Gerrel";
    int age = 24;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas; //array does not need ampersand
    

    cout << pName << endl; //will display address
    cout << *pName << endl; // will display value at that address
    cout << pAge << endl;
    cout << *pAge << endl;
    cout << freePizzas << endl;
    cout << *pFreePizzas << endl;
    cout << *(pFreePizzas + 1); //accesses index 1 in the freePizzas array

}


//pointer = a variable that stores a memory address of another variable
//address-of operator
//* dereference operator