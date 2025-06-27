#include <iostream>
using namespace std;

// Function to take array input
void takeInput(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}

// Function to print the array
void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int a[100];  // Declare array with a max size. (Or use dynamic allocation for large size)

    cout << "Enter " << size << " elements:\n";
    takeInput(a, size);  

    cout << "You entered: ";
    printArray(a, size);

    return 0;
}
