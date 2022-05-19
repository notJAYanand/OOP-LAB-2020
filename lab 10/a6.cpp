#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char ch[40];
    cin>>ch;
    ofstream out;
    out.open("prog6");
    out<<ch;
    int k=out.tellp();
    out.close();
    ifstream in;
    in.open("prog6");
    char ch2[40];
    in.getline(ch2,k+1);
    for(int i=0;i<=strlen(ch2);i++){
        if(ch2[i]>=65&&ch2[i]<=90)
         ch2[i]=ch2[i]+32;
    }
    cout<<"After conversion:"<<endl;
    cout<<ch2;
}