#include<iostream>
using namespace std;
class in{
  private:
  int a;
  public:
  void input()
  {
      cout<<"enter integer";
      cin>>a;
  }
  void out()
    {
        cout<<"value of integer is "<<a;
    }
};
int main()
{
    in *ptr;
    ptr=new in;
    ptr->input();
    ptr->out();
    return 0;
}