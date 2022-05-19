/*Create a class student which stores name, roll number and age of a student. Derive a class test 
from student class, which stores marks in 5 subjects. Input and display the details of a student.*/

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
int main(){
    test t1;
    t1.get();
    t1.getmarks();
    t1.display();

}