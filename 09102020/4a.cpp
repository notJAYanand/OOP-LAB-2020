/*4. Overload binary plus operator to add two objects and store results to another object using
member and friend function*/

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
    friend student operator +(student k,student l){
        k.avg=k.avg+l.avg;                      //friend fn
        return k;
    }
};
int main(){
    student s1,s2,s3;
    s1.get();
    s2.get();
    s3=s1+s2;
    s3.display();
}