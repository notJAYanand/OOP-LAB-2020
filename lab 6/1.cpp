/*i. WAP to demonstrate all types of inheritance.*/

#include <iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void displaya()
    {
        a=10;
        cout << "Entered = " << a << endl;
    }

};
class A1
{
    protected:
    int a1;
    public:
    void displaya1()
    {
        a1=21;
        cout << "A1 Entered = " << a1 << endl;
    }

};

class B : public A
{
    protected:
    int b;
    public:
    void displayb()
    {
        b=20;
        cout << "B Entered = " << b << endl;
    }

};
class C : public A
{
    protected:
    int c;
    public:
    void displayc()
    {
        c=30;
        cout << "C Entered = " << c << endl;
    }
};

class D : public B
{
    protected:
    int d;
    public:
    void displayd()
    {
        d=40;
        cout << "D Entered = " << d << endl;
    }
};

class E : public A, public A1
{
    protected:
    int e;
    public:
    void displaye()
    {
        e=50;
        cout << "E Entered = " << e << endl;
    }

};

class F : public B
{
    protected:
    int f;
    public:
    void displayf()
    {
        f=60;
        cout << "D Entered = " << f << endl;
    }
};

int main()
{
    B obb;
    C obc;
    D obd;
    E obe;
    F obf;
    cout << "Single : \n";
    obb.displaya();
    cout << "Multilevel : \n";
    obd.displaya();
    cout << "Hybrid : \n";
    obd.displaya();
    obf.displaya();
    cout << "Multiple : \n";
    obe.displaya();
    obe.displaya1();
    cout << "Hierarchical : \n";
    obb.displaya();
    obc.displaya();
}