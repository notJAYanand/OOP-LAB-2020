#include<iostream>
using namespace std;

class shape
{
protected:
double area;

public:
void display()
{
cout<<"area="<<area<<endl;

}
virtual void cal()=0;
};



class circle:public shape
{
float ra;
public:
circle(float r)
{
ra=r;
}
void cal()
{
area=3.14*ra*ra;
}
};

class triangle:public shape
{
float ba,h;
public:
triangle(float b,float he)
{
ba=b;
h=he;
}

void cal()
{
area=0.5*ba*h;
}
};

class square:public shape
{
float l;
public:
square(float len)
{
l=len;
}
void cal()
{
area=l*l;
}
};


int main()
{
circle c(4.9);
triangle t(5.6,8);
square r(5);
shape *ptr[]={&c,&t,&r};

for(int i=0;i<3;i++)
{
ptr[i]->cal();
ptr[i]->display();
}
return 0;
}
