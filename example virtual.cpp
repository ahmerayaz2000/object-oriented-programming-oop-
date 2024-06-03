#include<iostream>
using namespace std;
class A{
    public:
    virtual void show()
    {
        cout<<"hi"<<endl;
    }
    
};
class B:public A
{
    public:
    void show()
    {
        cout<<"hello "<<endl;
    }
};
class C :public A
{
    public:
    void show()
    {
        cout<<"bye  ";
    }
};

int main()
{
    A obj;
    B ob;
    C o;
    A *ptr;
    
    ptr= &obj;
    ptr->show();
    ptr= &ob;
    ptr->show();
    ptr= &o;
    ptr->show();
    
    return 0;
}