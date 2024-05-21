#include<iostream>
using namespace std;

class person {
private:
    int id;
    char name[100];
    char address[100];
public:
    person() {
        id = 0;
    }
    void in() {
        cout << "Enter id, name, and address: ";
        cin >> id;
        cin.ignore(); // To ignore the newline character after the id input
        cin.getline(name, 100); // To read the whole line for name
        cin.getline(address, 100); // To read the whole line for address
    }
    void out() {
        cout << "Your id, name, and address are: " << id << endl << name << endl << address << endl;
    }
};

class student : public person {
private:
    int rno, marks;
public:
    void in() {
        person::in(); // Call the base class in() method to input id, name, and address
        cout << "Enter roll number and marks: ";
        cin >> rno >> marks;
    }
    void out() {
        person::out(); // Call the base class out() method to output id, name, and address
        cout << "Your roll number and marks are: " << rno << ", " << marks << endl;
    }
};

int main() {
    student s;
    s.in();
    s.out();

    return 0;
}
