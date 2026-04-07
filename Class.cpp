#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter function
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    // Getter function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;          // Object creation
    s1.setData("John", 20);
    s1.display();

    return 0;
}
