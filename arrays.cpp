#include <array>
#include <vector>
#include <iostream>

using namespace std;

//arrays are static sized (can't change the size)
// vectors are dynamic sized (size CAN be changed)


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
}

int main() {

    // int guesses[20];
    // int numElements = 5;
    // guesses[0] = 10;
    // cin >> guesses[0];
    // cout << guesses[0];

    // int guesses[] = {1, 2, 3, 4, 5, 6, 7};
    // cout << guesses[3] << endl;
    // guesses[3] = 300;
    // cout << guesses[3] << endl;

    // int guesses[10] = {1, 2, 3, 4, 5};
    // int num_elements = 5;
    // int size = sizeof(guesses) / sizeof(guesses[0]); //this formula gives back the actual size of the array
    // cout << size << endl;
    // for (int i = 0; i < num_elements; i++) {
    //     cout << guesses[i] << "\t";
    // }

    int guesses[] = {1, 2, 3, 4, 5};
    

    printArray(guesses, 3);

    return 0;
}