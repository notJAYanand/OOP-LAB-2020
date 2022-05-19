//Jay Anand 1905089
/*2.Write a program in C++to overload the area interest to compute simple interest and compound interest 
where rate of interest is set to default 9.5. Also show with user defined rate of interest.*/

#include <iostream>
#include <math.h>
using namespace std;

void si(int p,int t,float r=9.5){
float simi= p*r*t/100;
cout<<"simple intrest is "<<simi<<endl;
}
void ci(int p,int n,int t,float r=9.5){
    float comi=p*pow((1+(r/n)),(n*t));
    cout<<"compount intrest is "<<comi<<endl;
}
int main(){
    si(1000,1); ci(1000,1,1,9.5);
}
