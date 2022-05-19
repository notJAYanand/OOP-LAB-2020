#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
char name[20];
int id;

protected:
 int sal;
public:

 Emp(char *s,int d)
{
strcpy(name,s);
id=d;
}
 virtual float cal()=0;

void display()
{
cout<<"Employee details"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"ID="<<id<<endl;
cout<<"Salary="<<cal()<<endl;
printf("\n");

}

};

class Regular:public Emp
{
float bsal,da,hra;
public:
  Regular(char *s,int d,int basic):Emp(s,d)
{
bsal=basic;
}

float cal()
{
da=0.4*bsal;
hra=0.1*bsal;
sal=bsal+da+hra;
return sal;
}
};

class part:public Emp
{
int h,m;
public:

part(char *s,int d,int hour,int money):Emp(s,d)
{
h=hour;
m=money;
}
float cal()
{
sal=30*h*m;
return sal;
}
};


int main()
{
Emp *ptr;

Regular r((char*)"Amit",21,40000);
ptr=&r;
ptr->cal();
ptr->display();

part p((char*)"Ravi",22,10,500);
ptr=&p;
ptr->cal();
ptr->display();


return 0;
}
