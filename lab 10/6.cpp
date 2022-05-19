/*vi.WAP to read and write objects to a file,using read and write functions.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char ch[20];
    cin>>ch;
    ofstream out;
    out.open("q7");
    out.write((char*)ch,sizeof(ch));
    out.close();
    char ch2[20];
    ifstream in;
    in.open("q7");
    in.read((char*)ch2,sizeof(ch2));
    cout<<"After use of read and write operations:"<<endl;
    cout<<ch2;
    in.close();
}