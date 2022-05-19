/*1.WAP to overload following operators for class distance, which stores the distance in feet and inches. 
a)Overload  Binary + to add two objects (D3=D1+D2) 
b)Add an object to an integer, where the integer should be added to the 
inches value ( D2=4+D1) 
c)Overload Unary - to show the new sign of values.*/


#include<iostream>
using namespace std;
class dist{
    int feet,inches;
    public:
    void get(){
    cin>>feet>>inches;
    }
    void display(){
    cout<<feet<<" "<<inches<<endl;
    }
   /*   friend  void operator +(dist &d,int v){              // remove comment to use this and comment other + operator
        d.feet=d.feet+v;
        d.inches=d.inches+v;
    }*/
     dist operator +(dist d){
        dist temp;
        temp.feet=feet+d.feet;
        temp.inches=inches+d.inches;
        return temp;
    }
     void operator -(){
       
        feet=-feet;
        inches=-inches;
        
    }
};

int main(){
   dist d1,d2,d3;
    
    
    
    d1.get();
    d2.get();
    d3=d1+d2;
    //d1+4;
    d3.display();
    dist d4;
    -d3;
    d3.display();
}