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
        cout << "Enter id: ";
        cin >> id;
        cin.ignore(); // Ignore the newline character left in the input buffer
        cout << "Enter name: ";
        cin.getline(name, 100);
        cout << "Enter address: ";
        cin.getline(address, 100);
    }
    void out() {
        cout << "Your id, name, and address is: " << id << endl << name << endl << address << endl;
    }
};

class student : public person {
private:
    int rno, marks;
public:
    void in() {
        person::in(); // Call base class method to input id, name, and address
        cout << "Enter roll number and marks: ";
        cin >> rno >> marks;
    }
    void out() {
        person::out(); // Call base class method to output id, name, and address
        cout << "The roll number and marks are: " << rno << endl << marks << endl;
    }
};

class scholarship : public person {
private:
    char sname[100];
    long amount;
public:
    void in() {
        person::in(); // Call base class method to input id, name, and address
        cout << "Enter scholarship name: ";
        cin.ignore(); // Ignore the newline character left in the input buffer
        cin.getline(sname, 100);
        cout << "Enter amount: ";
        cin >> amount;
    }
    void out() {
        person::out(); // Call base class method to output id, name, and address
        cout << "The scholarship name and amount is: " << sname << endl << amount << endl;
    }
};

int main() {
    scholarship p;
    p.in();
    p.out();
    return 0;
}
