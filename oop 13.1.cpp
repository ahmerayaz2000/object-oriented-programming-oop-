#include<iostream>
using namespace std;
class student{
  private:
  int a;
  public:
  void in()
  {
      cout<<"enter a number";
      cin>>a;
  }
  void out(){
      cout<<"the number you entered is"<<a;
      
  }
};
int main()
{
    student s;
    s.in();
    s.out();
    return 0;
}