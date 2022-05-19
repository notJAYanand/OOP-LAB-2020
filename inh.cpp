#include <iostream>
using namespace std;
//base class
class shape{
    protected:
    int width;
    int height;
    public:
    void setw(int w){
    width=w;}
    void seth(int h){
        height=h;
    }
};
//derived class
class rect:public shape{
    public:
    int getarea(){
        return(width*height);
    }
};
int main(){
    rect r;
    r.setw(5);
    r.seth(7);
    cout<<"area= "<<r.getarea()<<endl;
    return 0;

}