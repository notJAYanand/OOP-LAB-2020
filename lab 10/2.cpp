/*ii. WAP to copy contents of one file to another.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char arr[50];
    ifstream in;
    in.open("hello1");
    in.seekg(0,ios::end);
    int k= in.tellg();
    in.seekg(0,ios::beg);
    in.getline(arr,k+1);
    in.close();
    ofstream out;
    out.open("hi1");
    out<<arr;
    out.close();
    cout<<"SUCCESS"<<k<<endl;

}