#include <iostream>

using namespace std;


int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);
//all the code above this comments is an example of overloading a function

int main() {

    cout << sum(4, 3) << endl;
    cout << sum(4.4, 3.3) << endl;
    cout << sum(4.4, 3.3, 2.2) << endl;
//this is function overloading
}

int sum(int a, int b) {
    // int result = a + b;
    // return result;
    //OR
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

float sum(float a, float b, float c) {
    return a + b + c;
}

//these 3 functions above are just telling us waht the funcitons are doing