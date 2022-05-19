//Jay Anand 1905089
/*2.Write a program to pass a student name,roll no and avg marks as Function Argument and print 
all the details in user defined function.*/
#include <iostream>
using namespace std;
void print(char [],int,int);

int main(){
  char a[50];
  int roll,mar;
  cout<<"enter name, roll, avg marks"<<endl;
  cin>>a>>roll>>mar;
  print(a,roll,mar);
  return 0;
}
void print(char a[],int b,int c){
cout<<"details:"<<endl;
  cout<<a<<endl<<b<<endl<<c<<endl;
}
