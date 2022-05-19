#include <iostream>
using namespace std;
class distance{
    int feet,inch;
    public:
    distance();
    void input(int,int);
    void show;
    
}
distance:: distance(){
    feet=0;inch=0;

}
void distance :: input(int f,int i){
    f=feet;
    i=inch;
    if(i>=12){
        f=f+(i%12);
    }
}
void distance :: show(){
    cout<<"feet: "<<feet<<endl;
    cout<<"inch: "<<inch<<endl;
    
}
distance:: add(int f,int i){
    distance temp; f=feet;i=inch;
    temp.f=f+d2.f;
}