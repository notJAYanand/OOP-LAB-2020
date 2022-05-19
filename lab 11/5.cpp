#include <iostream>
using namespace std;
int main(){
    int a,b,res;
    cin>>a;
    cin>>b;
   
    try{
        if(b==0){
        throw b;}
      else{  
        res=a/b;
        cout<<res<<endl;    
      }
        
        
    }
    catch(int i){
        cout<<"div by zero"<<endl;
    }
   // cout<<res<<endl;
    cout<<"end";

}