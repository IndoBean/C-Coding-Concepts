#include <iostream>
#include <cstdlib> //use this library to call rand() and srand() funciton
#include <ctime> //accesses the time library to seed a random number

using namespace std;

int main() {

    int x = time(0); //sets a variable to time
    srand(x); //seeding srand
    cout << 1 + rand() % 6 << endl; //returning a random number from 1 - 6 (THE  '1 +' IS IMPORTANT, AS WITHOUT IT IT WILL RETURN A NUMBER FROM ONLY 1 - 5)
    cout << 1 + rand() % 10 << endl; //returning a number from 1 - 10 (you can use this exact formula to generate a number from 1 to whatever is after the modulus(%) sign)
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    return 0;
}

//NOTES
//rand() is a pseudorandom number generator. The generated sequence is not truly random
//because it's completely determined by an initial value, called the seed.