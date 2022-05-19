#include <iostream>
#include<string.h>
using namespace std;
int main(){
   
    try{
    char *a;
    a=new char[5];
    
    
        for(int i=0;i<5;i++){
            
           
        
        if(i>4)
            throw a;
          a[i]={'z'};
        }
        }
        catch(char p){
            cout<<"asdasd"<<endl;
        
        }
        cout<<"end"<<endl;

    }

