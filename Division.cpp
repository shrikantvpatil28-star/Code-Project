#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num2 != 0) {
        float result = num1 / num2;
        cout << "Division Result: " << result << endl;
    } else {
        cout << "Error! Division by zero is not allowed." << endl;
    }

    return 0;
}
