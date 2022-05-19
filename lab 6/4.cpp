/*Extend the program ii. to include a class sports, which stores the marks in sports activity.
 Derive the result class from the classes ‘test’ and ‘sports’. Calculate the total marks and percentage
  of a student.*/

#include<iostream>
using namespace std;
class student{
    public:
    char name[50];
    int roll;
    int age;
    void get(){
        cout<<"Enter name age rollNo:"<<endl;
        cin>>name>>roll>>age;
    }
};
class test:public student{
    protected:
    int marks[5];
    public:
    void getmarks(){
        cout<<"Enter marks: "<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks:"<<endl;
        for(int i=0;i<5;i++){
            cout<<marks[i]<<endl;
        }
    }
};
class sports{
    protected:
    int sportsmarks;
    public:
    void getsportsmarks(){
        cin>>sportsmarks;
    }
};
class result:public test,public sports{
    int t=0;
    int p=0;
    public:
    void totalmarks(){
        for(int i=0;i<5;i++){
            t=t+marks[i];
        }
        t=t+sportsmarks;
        cout<<"Total: "<<t<<endl;
    }
    void percent(){
        p=(t/250.0)*100;
        cout<<"Percentage: "<<p<<endl;
    }
};
int main(){
    result r1;
    r1.get();
    r1.getmarks();
    r1.getsportsmarks();
    r1.display();
    r1.totalmarks();
    r1.percent();

}