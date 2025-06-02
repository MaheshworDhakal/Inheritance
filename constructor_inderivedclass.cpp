#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num3;

public:
    Base() {
        cout << "Enter the value of num3:\n";
        cin >> num3;
    }

    Base(int data) : num1(data) {
        // num3 will be initialized by the default constructor
    }

    void display() {
        cout << "The first number of base is: " << num1 << endl;
        cout << "The third number of the base is: " << num3 << endl;
    }
};

class Derived : public Base {
protected:
    int num2;

public:
    Derived() {
        cout << "Enter the value of num2:\n";
        cin >> num2;
    }

    Derived(int a) : Base() {  // Explicitly call the default constructor of Base
        cout << "Enter the value of num2:\n";
        cin >> num2;
    }

    void display() {
        Base::display();
        cout << "The number in derived: " << num2 << endl;
    }
};

int main() {
    Derived d1;
    d1.display();

    cout << endl;

    Derived d2(5);
    d2.display();

    return 0;
}
