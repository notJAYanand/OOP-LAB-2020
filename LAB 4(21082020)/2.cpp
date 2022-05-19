//Jay Anand 1905089
/* 2.Create two classes which stores distance in feet, inches and meter, centimeter format 
respectively. Write a function which compares distance in object of these classes and 
displays the larger one.*/
#include<iostream>
using namespace std;

class dist{

int feet,inch,meter,cm;
public:
void input(int,int,int,int);
friend void largest(dist,dist);
float convert(void);
};
void dist :: input(int f,int i,int m, int c){
    feet=f;
    inch=i;
    meter=m;
    cm=c;
}
float dist :: convert(){
float value;
value = feet+(inch/12)+(30.37/12)*meter+(0.39/12)*cm;
return value;
}
void largest(dist a,dist b){
    float first,second;
    first=a.convert();
    second=b.convert();
    if(first>second)
    cout<<"A is greater than B"<<endl;
    else
    {
    cout<<"B is smaller than A"<<endl;    /* code */
    }
    
}
int main(){
int f,i,m,c;
int f1,i1,m1,c1;
dist a;
dist b;
cout<<"Enter values for A"<<endl;
cin>>f>>i>>m>>c;
a.input(f,i,m,c);
cout<<"Enter values for B"<<endl;
cin>>f1>>i1>>m1>>c1;
b.input(f1,i1,m1,c1);
largest(a,b);
    return 0;
}