#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rNo;
    string name;
    string section;

    Student(int rNo, string name, string section) {
        this->rNo = rNo;
        this->name = name;
        this->section = section;
    }

    void getInfo() {
        cout << this->rNo << endl;
        cout << this->name << endl;
        cout << this->section << endl;
    }
};

int main() {

    Student s1(101, "Ayush", "B.Tech");
    Student s2(s1);
    Student s3 = s1;
    s3.getInfo();

    return 0;
}