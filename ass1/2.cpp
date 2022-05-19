#include<iostream>
using namespace std;
class student{
    char *name;
    int *mark;
    public:
    student(){
        name= new char[50];
        cout<<"Enter the name"<<endl;
        cin>>name;
       
        mark= new int[5];
        cout<<"Enter the marks"<<endl;
        for(int i=0;i<5;i++)
         
         cin>>mark[i];
    }
    void display();
    ~student(){
    cout<<"destructor has been called "<<endl;
}
};
void student::display(){
    float sum=0;
    cout<<"Name: "<<name<<endl;
    for(int i=0;i<4;i++){
        sum=sum+mark[i];
    }
    float avg;
    avg=sum/4.0;
    cout<<"Average is "<<avg<<endl;
}
int main(){
    student s1,s2;
    s1.display();
    s2.display();
}