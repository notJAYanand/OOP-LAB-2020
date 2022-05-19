/*2.Create a class to store 
an integer array. Overload insertion and extraction operator to input and display the array elements. */

#include<iostream>
using namespace std;
int count=0;
class arr{
    int a[10];
    public:

    friend istream& operator >>(istream& k,arr &l){
        k>>l.a[count];
        count++;
        return k;
    }
    friend ostream& operator <<(ostream& k,arr &l){
        count--;
        k<<l.a[count]<<endl;
        return k;
    }
};
int main(){
    arr s1;
    cin>>s1;
    cout<<s1;
}