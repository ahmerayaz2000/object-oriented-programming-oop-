#include<iostream>
using namespace std;

class marks {
  private:
    int a, b, c;

  public:
    void in() {
        cout << "Enter three marks: ";
        cin >> a >> b >> c;
    }

    void sum() {
        cout << "The sum of all three marks is " << a + b + c << endl;
    }

    void average() {
        cout << "The average is " << (a + b + c) / 3 << endl;
    }
};

int main() {
    marks m;
    m.in();
    m.sum();
    m.average();
    return 0;
}
