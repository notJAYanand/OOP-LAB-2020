/*1.create 2 objects and add user defined values entered by user from keyboard and add to both the
object separately and display them by overloading binary plus operator and display them using
member function.*/

#include<iostream>
using namespace std;
class student{
    int avg;
    public:
    void get(){
        cin>>avg;
    }
    void display(){
        cout<<avg<<endl;
    }
    void operator +(int v){               // user defined values
        avg=avg+v;
    }
};
int main(){
    student s1;
    int v;
    cin>>v;
    s1.get();
    s1+v;
    s1.display();
}