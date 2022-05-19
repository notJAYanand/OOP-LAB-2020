//Jay anand 1905089
/*1.Write a program to overload the function area to compute area of rectangle, circle and square*/

#include <iostream>
using namespace std;
void arearec(int,int);
void areacir(int);
void areasq(int);
int main(){
    arearec(10,20); areacir(10); areasq(10);
}
void arearec(int a,int b){
    int ar=a*b;
    cout<<"area of rect is "<<ar<<endl;
}
void areacir(int r){
    int arc=3.14*r*r;
    cout<<"area of circle is "<<arc<<endl;
}
void areasq(int p){
    int ars=p*p;
    cout<<"area of square is "<<ars<<endl;
}