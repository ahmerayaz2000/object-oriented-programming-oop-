#include<iostream>
using namespace std;

class parent {
protected:
    int a, b;
public:
    void in() {
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }
    void add() {
        cout << "The sum of two numbers is " << a + b << endl;
    }
    void sub() {
        cout << "The difference of two numbers is " << a - b << endl;
    }
    void mult() {
        cout << "The product of two numbers is " << a * b << endl;
    }
    void div() {
        if (b != 0) {
            cout << "The division of two numbers is " << a / b << endl;
        } else {
            cout << "Error: Division by zero." << endl;
        }
    }
};

class complex : public parent {
public:
    void add() {
        if (a <= 0 || b <= 0) {
            cout << "Invalid values" << endl;
        } else {
            parent::add();
        }
    }
    void sub() {
        if (a <= 0 || b <= 0) {
            cout << "Invalid values" << endl;
        } else {
            parent::sub();
        }
    }
    void mult() {
        if (a <= 0 || b <= 0) {
            cout << "Invalid values" << endl;
        } else {
            parent::mult();
        }
    }
    void div() {
        if (a <= 0 || b <= 0) {
            cout << "Invalid values" << endl;
        } else {
            parent::div();
        }
    }
};

int main() {
    complex c;
    c.in();
    c.add();
    c.sub();
    c.mult();
    c.div();
    return 0;
}
