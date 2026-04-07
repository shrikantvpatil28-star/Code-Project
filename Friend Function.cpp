#include <iostream>
using namespace std;

class Sample {
private:
    int x;

public:
    Sample(int a) {
        x = a;
    }

    
    friend void show(Sample s);
};


void show(Sample s) {
    cout << "Value of x: " << s.x << endl;  
}

int main() {
    Sample obj(10);
    show(obj);

    return 0;
}
