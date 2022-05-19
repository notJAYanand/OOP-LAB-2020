/*Extend the program ii. to derive a class from result from classs ‘test’ which includes member 
function to calculate total marks and percentage of a student. Input the data for a student and display
 its total marks and percentage.*/

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
class result:public test{
    int t=0;
    int p=0;
    public:
    void totalmarks(){
        for(int i=0;i<5;i++){
            t=t+marks[i];
        }
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
    r1.display();
    r1.totalmarks();
    r1.percent();
