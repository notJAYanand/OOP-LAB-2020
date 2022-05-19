//Jay Anand 1905089
/*1.WAP to swap private data member of two classes. 
[The classes have no relation with each other].*/
#include <iostream>
using namespace std;
class class2;
class class1{
    int value1;
    public:
    void in(int a){
        value1=a;
    }
    void display(void){
        cout<<value1<<endl;
    }
    friend void swap(class1 &,class2 &);
};
class class2{
    int value2;
    public:
    void in(int a){
        value2=a;
    }
    void display(void){
        cout<<value2<<endl;
    }
    friend void swap(class1 &, class2 &);
};
void swap(class1 & x, class2 & y){
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main(){
    class1 c1;
    class2 c2;
    c1.in(10);
    c2.in(20);
    cout<<"before swap"<<endl;
    c1.display();
    c2.display();
    swap(c1,c2);

    cout<<"after swap"<<endl;
    c1.display();
    c2.display();
    return 0;
}