/*6.WAP to add two objects of distance class. Overload the operator ‘>’ to compare 
two objects and return the object with larger time value and display it. Overload the ‘==’ 
operator to compare and display whether two given objects contain same distance value.*/

#include<iostream>
using namespace std;
class dis{
public:
int a;
void get(){
    cin>>a;

}
    dis operator +(dis d){
        dis temp;
        temp.a=a+d.a;
        
        return temp;
    }
    void show(){
        cout<<a;
    }
friend bool operator>(dis &d1,dis &d2);
friend bool operator==(dis &d1,dis &d2);
};
bool operator>(dis &d1,dis &d2){
    return(d1.a>d2.a);
}
bool operator==(dis &d1,dis &d2){
    return(d1.a==d2.a);
}

int main(){
    dis d1,d2;
    dis d3;
    
    d1.get();
    d2.get();
    d3=d1+d2;
    if(d1>d2){
        cout<<d1.a<<endl;
    }
    else{
        cout<<d2.a<<endl;
    }
    if(d1==d2){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }

    printf("\n");
    d3.show();
}