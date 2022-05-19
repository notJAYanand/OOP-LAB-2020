/*3. Add these properties of 1 object to another object by using member and friend function and
display them*/

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
    student operator +(student k){
        student temp;
        temp.avg=avg+k.avg;              //member fn
        return temp;
    }
};
int main(){
    student s1,s2,s3;
    s1.get();
    s2.get();

    s3=s1+s2;
    s3.display();
}