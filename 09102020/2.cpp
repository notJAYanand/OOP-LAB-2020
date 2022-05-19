/*2. Perform using friend function*/

#include<iostream>
using namespace std;
class student{
    int avg;
    public:
    void get(){
        cin>>avg;
    }
    friend void operator +(student &k,student &l){
        k.avg=k.avg+l.avg;
    }
    void display(){
        cout<<avg<<endl;
    }
};
int main(){
    student s1,s2;
    s1.get();
    s2.get();
    operator +(s1,s2);
    s1.display();
}