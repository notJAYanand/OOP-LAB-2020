//Jay Anand 1905089
/*3. Write a program to allocate n spaces dynamically to allocate for integers. 
Enter values and find the sum and average.  The value of n is enter by user from keyboard.*/
#include <iostream>
using namespace std;
int main(){
    int n,s=0;
    cout<<"enter no."<<endl;
    cin>>n;

    int *q = new int[n];
        cout<<"enter no.s "<<endl;
for(int i=0;i<n;i++){
    cin>>*(q+i);

}
for(int i=0;i<n;i++){
    s=s+*(q+i);}
    cout<<"sum is= "<<s<<endl;
    int avg=s/n;
    cout<<"avg = "<<avg<<endl;
    return 0;
}