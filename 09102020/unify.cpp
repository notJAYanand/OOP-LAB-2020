#include<iostream>
using namespace std;
class student{
    int avg;
    public:
    void operator +(student k){
        avg=avg+k.avg;
    }
    void get(){
        cin>>avg;
    }
     /*   friend void operator +(student &k,student &l){
        k.avg=k.avg+l.avg;                       //2
    }*/
    void display(){
        cout<<avg<<endl;
    }
   /*    student operator +(student s){
        student temp;
        temp.avg=avg+s.avg;              
        return temp;
    }*/                                     //3

     /*   friend student operator +(student k,student l){
        k.avg=k.avg+l.avg;
        return k;
    }*/                       //4
};
int main(){
    student s1,s2;
    student s3;

    s1.get();
    s2.get();
    s1+s2;
    //operator +(s1,s2);              //2
    //s3=s1+s2;                        //3
    s1.display();
    //s3.display();                   //3&4
    
}