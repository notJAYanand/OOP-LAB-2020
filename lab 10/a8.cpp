#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char a[50];
    ofstream out;
    out.open("hello");
    cin>>a;
    out<<a;
    cin>>a;
    out<<a;
    out.close();
    char b[50];
    ifstream in;
    in.open("hello");
    while(in){
    in.getline(b,30);
    cout<<b;
    }
    in.close();

}