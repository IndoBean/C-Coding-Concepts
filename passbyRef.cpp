#include <iostream>

using namespace std;

// for variable arguments ONLY! int x, double d, char c, etc. 8, 3.2, 'A'
//anything you do to the parameter, you do to the argument...
//you can kind of "fake" returning multiple values this way...

void foo(int &, int &, int &);
void foo(int &p, int &q, int &r) {

    p = 100;
    q = 200;
    r = 300;

}

int main() {

    int x = 1;
    int y = 2;
    int z = 3;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    foo(x, y, z);
    cout << "Pass by reference is:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;

}

//Pass by Value: Copies the value; original variable remains unchanged.
//Pass by Reference: Passes the reference; original variable can be modified.