/*Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: ‘Regular’ 
and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number 
of hours and pay per hour. Calculate the salary of a regular employee and a par-time employee*/


#include<iostream>
using namespace std;
class employee{
    protected:
    char a[50];
    int id;
    int salary;
    public:
    void display(){
        cout<<"Name: "<<a<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
    }
    void get(){
        cout<<"Enter name: "<<endl;
        cin>>a;
        cout<<"Enter ID: "<<endl;
        cin>>id;
        cout<<"Enter salary: "<<endl;
        cin>>salary;
    }
};
class regular:public employee{
    int DA,HRA,basic;
    int total=0;
    public:
    void additional(){
        cout<<"Enter DA,HRA,basic"<<endl;
        cin>>DA>>HRA>>basic;
    }
    void total_salary(){
        total=DA+HRA+basic+salary;
        cout<<"Total salary is: "<<total<<endl;
    }
};
class part_time:public employee{
    int no_of_hours;
    int pay_per_hour;
    int total;
    public:
    void additional(){
        cout<<"Enter No.of hours and Pay per hour:"<<endl;
        cin>>no_of_hours>>pay_per_hour;
    }
    void total_salary(){
        total=salary+(no_of_hours*pay_per_hour);
        cout<<"Total salary is: "<<total<<endl;
    }

};
int main(){
    regular r1;
    r1.get();
    r1.additional();
    r1.display();
    r1.total_salary();
    part_time p1;
    p1.get();
    p1.additional();
    p1.display();
    p1.total_salary();
}