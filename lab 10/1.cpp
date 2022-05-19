/*i.WAP to display content of a file using character output function.*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char arr[50];
    ofstream out;
    out.open("hello");
    cin>>arr;
    out<<arr;
    int k=out.tellp();
    out.close();
    char arr1[50];
    ifstream in;
    in.open("hello");
    in.getline(arr1,strlen(arr)+1);
    in.close();

    cout<<"Contents of file is: "<<arr1<<endl;
    cout<<k<<endl;
}