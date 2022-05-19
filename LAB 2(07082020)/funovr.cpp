#include <iostream>
using namespace std;
void show(void);
void show (int);
void show (int,float);
int main(){
    show(); show(0); show(30,5.5f);
    return 0;
}
void show(void){
    cout<<"no arg fn"<<endl;

}
void show (int k){
    cout<<"int arg fn"<<endl;
}
void show (int k,float l){
    cout<<"int and float arg fn"<<endl;
}