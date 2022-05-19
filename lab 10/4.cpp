/*iv. WAP to display content of a file in reverse order.*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char arr[40];
    char ch;
    cin>>arr;
    ofstream out;
    out.open("q4");
    out<<arr;
    out.close();
    ifstream in;
    in.open("q4");
    in.seekg(0,ios::end);
    int k=in.tellg();
    
    for(int i=1;i<=k;i++){
        in.seekg(-i,ios::end);
        in.get(ch);
        cout<<ch;
    }
}