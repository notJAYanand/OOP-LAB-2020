//Jay Anand 1905089
/*3.Write a program to create a function that calculates the simple rate of intrest and 
returns the value to the calling function.*/
#include <iostream>
using namespace std;
float si(int,float,int);
int main(){
  int p,t;
  float r;
  cout<<"enter principal,rate,time"<<endl;
  cin>>p>>r>>t;
  float s=si(p,r,t);

  cout<<"simple intrest is :"<<s<<endl;
  return 0;
}
float si(int a,float b, int c){
float intrest;
  intrest=((a*b*c)/100.0);
  return intrest; 
}
