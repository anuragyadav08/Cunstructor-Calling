

#include <iostream>

using namespace std;

class A  
{
    public:
    A()
    {
        cout<<"class A"<<endl;
    }
};

class B 
{
    public:
    B()
    {
        cout<<"class B"<<endl;
    }
};
class A1 :public A
{
    public:
    A1()
    {
        cout<<"class A1 Inherit from A"<<endl;
    }
};

class C :public B,virtual public A1 
{
    public:
    C()
    {
        cout<<"class C"<<endl;
    }
};
int main()
{
    
    C obj;
    return 0;
}
