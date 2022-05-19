/*1.create 2 objects and add user defined values entered by user from keyboard and add to both the
object separately and display them by overloading binary plus operator and display them using
member function.*/

#include<iostream>
using namespace std;
class student{
    int avg;
    public:
    void operator +(student k){
        avg=avg+k.avg;
    }
    void get(){
        cin>>avg;
    }
    void display(){
        cout<<avg<<endl;
    }
};
int main(){
    student s1,s2;
    s1.get();
    s2.get();
    s1+s2;
    s1.display();
    
}