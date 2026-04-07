#include <iostream>
using namespace std;

class Sample {
private:
    int x;

public:
    Sample(int a) {
        x = a;
    }

    // Declare friend function
    friend void show(Sample s);
};

// Define friend function outside class
void show(Sample s) {
    cout << "Value of x: " << s.x << endl;  // Access private member
}

int main() {
    Sample obj(10);
    show(obj);

    return 0;
}
