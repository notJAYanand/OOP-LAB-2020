/*v. WAP to count following in a given file:
a. No.of characters b. No.of words d.No.of uppercase letters,
lowercase letters, digits and special symbols.*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char ch[50];
    cin.getline(ch,50);
    ofstream out;
    out.open("prog5");
    // cin.getline(ch,50);
    out<<ch;
    int k=out.tellp();
    cout<<"No of characters are: "<<k<<endl;
    out.close();
    ifstream in;
    in.open("prog5");
    char c;
    int count1=0;
    for(int i=0;i<k;i++){
        in.get(c);
        if(c==' ' || c=='.'){
            count1++;
        }
    }
    cout<<"No of words: "<<count1<<endl;
    int uc=0;
    int lc=0;
    int dig=0;
    int spe=0;
    in.seekg(0,ios::beg);
    for(int i=0;i<k;i++){
        in.get(c);
        if(c>=65&&c<=90){   //capital
            uc++;
        }else if(c>=97 && c<=122){         //small
            lc++;
        }else if(c>=48 && c<=57){        //dig
            dig++;
        }else{                      //special
            spe++;
        }
    }
    cout<<"No. of upper case letters: "<<uc<<endl;
    cout<<"No. of lower case letters: "<<lc<<endl;
    cout<<"No. of Digits: "<<dig<<endl;
    cout<<"No. of special characters: "<<spe<<endl;

}