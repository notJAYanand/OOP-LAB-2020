#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "Constructor of Grandparent A Called " << endl;         
        }
        ~A()
        {
            cout << "Destructor of Grandparent A Called " << endl;
        }
};

class B : public virtual A
{
    public:
        B()
        {
            cout << "Constructor of Parent B Called " << endl;
        }
        ~B()
        {
            cout << "Destructor of Parent B Called " << endl;
        }
};

class C : virtual public A
{
    public:
        C()
        {
            cout << "Constructor of Parent C Called " << endl;
        }
        ~C()
        {
            cout << "Destructor of Parent C Called " << endl;
        }
};

class D : public B, public C
{
    public:
        D()
        {
            cout << "Constructor of Child D Called " << endl;
        }
        ~D()
        {
            cout << "Destructor of Child D Called " << endl;
        }
};


int main()
{
    
    D d;

    return 0;
}