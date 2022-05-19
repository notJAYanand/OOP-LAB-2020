/*2. Perform using friend function*/

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
    friend void operator +(student &k,int v){
        k.avg=k.avg+v;                  //using frnd function
    }
};
int main(){
    student s1;
    s1.get();
    s1.display();
    s1+4;
    s1.display();
}