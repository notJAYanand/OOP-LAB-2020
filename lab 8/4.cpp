/*4. Create a class which allocates the memory for a string through dynamic 
constructor. Overload the binary + to concatenate two strings and display it. */
#include<iostream>
#include<string.h>
using namespace std;
class str{
    char *a;
    char s[50];
    public:
    void show(){
        cout<<a<<endl;
    }
    str(){
        cin>>s;
        a=new char[strlen(s)+1];
        for(int i=0;i<strlen(s)+1;i++){
            a[i]=s[i];
        }
    }
    void operator +(str t){
        strcat(a,t.a);
        cout<<a<<endl;
    }
};
int main(){
    str t1,t2;
    t1+t2;
}