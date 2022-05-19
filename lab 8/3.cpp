/*3.Create a class which a complex number. Add two objects and
 display the resultant object.Overload the ++ (post and pre) operator for the class. */

#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int r,int i){
        real=r;
        imag=i;
    }
    void print(){
        cout<<real<<" + "<<"i"<<imag<<endl;
    }
    complex operator +(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    friend complex operator++(complex &c){
        ++c.real;
        ++c.imag;
        return c;

    }
    friend complex operator++(complex &c,int l){
      
        c.real++;
        c.imag++;
        return c;
    }
};
    int main(){
        complex c1(5,4);
        complex c2(2,5);
        complex c3;
        c3=c1+c2;
        complex c4;
        c4=++c1;
        c3.print();
        c4.print();
        complex c5;
        c5=c4++;
        c5.print();
    }

