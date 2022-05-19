#include<iostream>
#include<string.h>
using namespace std;
class str{
    public:
    char a[100];
    str(){}
    str(char a[]){
        strcpy(this->a,a);
    }
str operator+(str &s){
    str temp;
    strcat(this->a,s.a);//concata nation
    strcpy(temp.a,this->a);//return karne ke liye copy kiye
    return temp;
}
};
int main(){
    char a1[]="concata";
    char a2[]="nation";
     str s1(a1);
     str s2(a2);
     str s3;
    s3=s1+s2;
    cout<<s3.a;
}