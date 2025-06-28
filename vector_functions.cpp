// Vector functions demonstration

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // 1. size() - shows initial size
    cout << "Initial size: " << vec.size() << endl;
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;

    // 2. push_back() - to push elements into the vector
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(55);
    vec.push_back(75);

    cout << "After pushing elements, size of vector = " << vec.size() << endl;
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;

    // 3. pop_back() - to remove the last element
    vec.pop_back();

    cout << "After popping an element, size of vector = " << vec.size() << endl;
    for (int value : vec) {
        cout << value << " ";
    }
    cout << endl;

    // 4. back() - prints the last element
    cout << "Last element (back): " << vec.back() << endl;

    // 5. front() - prints the first element
    cout << "First element (front): " << vec.front() << endl;

    // 6. at() and [] - accessing element at index 2
    cout << "Element at index 2 using at(): " << vec.at(2) << endl;
    cout << "Element at index 2 using []: " << vec[2] << endl;

    return 0;
}