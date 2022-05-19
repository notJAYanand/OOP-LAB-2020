/*4. Overload binary plus operator to add two objects and store results to another object using
member and friend function*/

#include<iostream>
using namespace std;
class student{
    int avg;

    public:
    student(){
        avg=0;
    }
    void get(){
        cin>>avg;
    }
    void display(){
        cout<<avg<<endl;
    }

   student operator +(student s){           //member fn
        student temp;
        temp.avg=avg+s.avg;              
        return temp;
    }
};

int main(){
student s1,s2;    
s1.get();
s2.get();
student s3;
s3=s1+s2;
s3.display();
}