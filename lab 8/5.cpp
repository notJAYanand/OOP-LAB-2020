/*5.WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects and display whether 
they are equal or not. Overload the assignment operator to assign one property to another and display the time.*/

#include<iostream>
using namespace std;
class time{
    public:
    int min,sec;
    void get(){
        cin>>min>>sec;

    }
    void show(){
        cout<<min<<sec;
    }
    friend bool operator==(time &t1,time &t2);
    void operator = (time t){
        
        min = t.min;
       sec = t.sec;
    }
};
    bool operator==(time &t1, time &t2){
       return(t1.min==t2.min&&t1.sec==t2.sec);
       
    }

    
int main(){
    time t1,t2;
    t1.get();
    t2.get();
    if(t1==t2){
        cout<<"equal";
    }
    else{
        cout<<"unequal";
    }
    printf("\n");
    time t3;
    t3=t2;
   
    t3.show();
    }