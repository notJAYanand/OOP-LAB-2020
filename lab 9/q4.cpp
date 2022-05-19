#include<iostream>

using namespace std;

class X
{
protected:
int a;

int b;

public:
X(int a1)
{
a=a1;
}


virtual void display()=0;
virtual void cal()=0;
};



class Y:public X
{
int c;
public:
Y(int c1,int a1):X(a1)
{
c=c1;
}

void cal()
{
b=b*c;
}

void display()
{
cout<<"Num is"<<b;
}
};


int main()
{
X *ptr;
Y y(3,5);
ptr=&y;
ptr->cal();
ptr->display();
return 0;
}
