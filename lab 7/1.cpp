
#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    A()
    {
        cout << "Constructor of Base Class A invoked " << endl;
    }
    ~A()
    {
        cout << "Destructor of Base Class A invoked " << endl;
    }

};

class A1
{
    protected:
    int a1;
    public:
    A1()
    {
        cout << "Constructor of Base Class A1 called " << endl;
    }
    ~A1()
    {
        cout << "Destructor of Base Class A1 called " << endl;
    }

};

class E : public A, public A1
{
    protected:
    int e;
    public:
    E()
    {
        cout << "Constructor of Derived Class E called " << endl;
    }
    ~E()
    {
        cout << "Destructor of Derived Class E called " << endl;
    }
};
int main()
{
   
    E oe;
    return 0;
}