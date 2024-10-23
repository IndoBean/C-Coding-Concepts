#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1 = {1, 2, 3, 4};
    vector1.push_back(7); //adding to the end of a vector whiles changing it's capacity

    cout << "Front of vector before is : " << vector1.front() << endl; //shows front of vector
    cout << "Back of vector before push_back is: " << vector1.back() << endl; // shows back of vector
    cout << "Vector capacity before push_back is: " << vector1.capacity() << endl; //what the size of the vector is
    cout << "Vector size before push_back is: " << vector1.size() << endl;

    vector1.push_back(8);
    vector1.push_back(9);
    vector1.push_back(10);
    vector1.push_back(11); //this last push_back makes the vector double in capacity

    cout << "Front of vector after push_back is : " << vector1.front() << endl; //shows front of vector
    cout << "Back of vector after push_back is: " << vector1.back() << endl; // shows back of vector
    cout << "Vector capacity after push_back is: " << vector1.capacity() << endl; //what the size of the vector is
    cout << "Vector size after push_back is: " << vector1.size() << endl;

    cout << vector1.capacity() << endl;
    cout << "Vector size is: " << vector1.size() << endl;

    for(int i = 0; i < vector1.size(); i++) {
        cout << vector1[i] << " " << endl;
    }
    
    vector1.pop_back(); //will remove the last element and return it to me
                        //CAPACITY WILL NOT CHANGE EVEN THOUGH WE REMOVED AN ELEMENT

    cout << "Vector size after pop_back: " << vector1.size() << endl;

    vector1.insert(vector1.begin(), 3); //the .insert will put something in the vector
                                        //the .begine means it will put the new element int the beggining of the vectior

    cout << "This is the new element at index 0 after the insert: " << vector1[0] << endl;
}