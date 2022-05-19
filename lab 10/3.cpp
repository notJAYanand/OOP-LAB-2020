/*iii. WAP to write 10 strings into a file and display them from file.*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class strings{
    char a[20];
    public:
    void get(){
        cin>>a;
    }
    void show(){
        cout<<a;
    }
};
int main(){
    strings s[10],s1[10];
    for(int i=0;i<10;i++){
        s[i].get();
    }
    ofstream out;
    out.open("prog.txt");
    for(int i=0;i<10;i++){
        out.write((char*)&s[i],sizeof(s[i]));
    }
    out.close();
    ifstream in;
    in.open("prog.txt");

    cout<<"After Reading from file"<<endl;
    for(int i=0;i<10;i++){
        in.read((char *)&s1[i],sizeof(s1[i]));
        s1[i].show();
        printf("\n");
    }
    in.close();
}