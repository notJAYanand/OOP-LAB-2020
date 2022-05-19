//Jay Anand 1905089
/*3. Write a program to create a class student  having roll, and 5 subject marks. Input and display 
the details of two students along with average mark*/

#include <iostream>
using namespace std;

class student{
    int roll;
    int m1,m2,m3,m4,m5;
    int avg; 
    public:
    void get();
    void show();
};
void student::get(){
    cout<<"roll"<<endl;
    cin>>roll;
    cout<<"marks"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;
    avg=(m1+m2+m3+m4+m5)/5;
}
void student::show(){
    cout<<roll<<endl;
    cout<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl;
cout<<"avg- "<<avg<<endl;
}
int main(){
    student s1,s2;
    s1.get();
    s2.get();
    s1.show();
    s2.show();
    return 0;
}
