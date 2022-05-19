/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle.
 Include the relevant data members and functions in all the classes. Find the area of each 
 shape and display it.*/

#include<iostream>
using namespace std;
class shape{
    int radius;
    int base,height;
    int length,width;
    public:
    int getcircle(){
        cout<<"Enter radius:"<<endl;
        cin>>radius;
        return radius;
    }
    void gettriangle(int*a,int*b){
        cout<<"Enter base and height:"<<endl;
        cin>>base>>height;
        *a=base;
        *b=height;
    }
    void getrectangle(int *p,int *q){
        cout<<"Enter length and width:"<<endl;
        cin>>length>>width;
        *p=length;
        *q=width;
    }
};
class circle:public shape{
    float area;
    int r;
    public:
    void getarea(){
        r=getcircle();
        area=(3.14)*r*r;
        cout<<"Area of circle is: "<<area<<endl;
    }
};
class triangle:public shape{
    int b,h;
    float area;
    public:
    void getarea(){
        gettriangle(&b,&h);
        area=(0.5)*b*h;
        cout<<"Area of Triangle is: "<<area<<endl;
    }
};
class rectangle:public shape{
    int l,w;
    float area;
    public:
    void getarea(){
        getrectangle(&l,&w);
        area=l*w;
        cout<<"Area of Rectangle is: "<<area<<endl;
    }
};
int main(){
    circle c1;
    c1.getarea();
    triangle t1;
    t1.getarea();
    rectangle r1;
    r1.getarea();
}