//Just for understanding, do not run this program
//there are to main function in this program
//therefore error will come


//In C++, static allocation and dynamic allocation refer to how memory is assigned to variables or objects during the program's execution. Here's a clear comparison with examples:
//🔹 Static Allocation
//1.Memory is allocated at compile time.
//2.The size and type of the variable must be known beforehand.
//3.Automatically managed — memory is released when the variable goes out of scope.

//Example
#include <iostream>
using namespace std;

int main() {
    int a = 10;              // statically allocated
    int arr[5];              // statically allocated array

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
        cout << arr[i] << " ";
    }

    return 0;
}

//-) a and arr are stored on the stack.
//-) Memory is automatically freed when main() ends.

//🔹 Dynamic Allocation
//1.Memory is allocated at runtime using operators new and delete.
//2.Useful when size of data is unknown during compilation.
//3.Programmer must manually release memory using delete or delete[].

//Example
#include <iostream>
using namespace std;

int main() {
    int* p = new int;        // dynamically allocated integer
    *p = 20;

    int* arr = new int[5];   // dynamically allocated array

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 3;
        cout << arr[i] << " ";
    }

    delete p;                // free single variable
    delete[] arr;            // free array
    return 0;
}

//-) p and arr are stored on the heap.
//-) If delete/delete[] is not used, it causes a memory leak.

//🔸 Key Differences:

//| Feature           | Static Allocation       | Dynamic Allocation    |
//| ----------------- | ----------------------- | --------------------- |
//| Timing            | Compile-time            | Runtime               |
//| Memory Location   | Stack                   | Heap                  |
//| Size Known At     | Compile-time            | Runtime               |
//| Memory Management | Automatic (by compiler) | Manual (`new/delete`) |
//| Speed             | Faster                  | Slower                |
//| Example           | Array                   | Vector                |
