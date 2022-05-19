//Jay Anand 1905089

/*i.Create a class complex which stores real and imaginary part of a complex number. Include all types of constructors and destructor. The destructor should display a
message about the destructor being invoked. Create objects using different
constructors and display them. */

#include <iostream>
using namespace std;
class complex{
    float real;
    float imag;
    public:
   
//default cons
complex(){
    cout<<"def cons invoked"<<endl<<endl;
}
//para cons
complex(float r,float i){
   cout<<"para cons invoked"<<endl;
    real=r;
    imag=i;
}
//cpy cons
complex(complex &obj){
    cout<<"cpy cons invoked"<<endl;
    real=obj.real;
    imag=obj.imag;
}
void input(float r,float i){
real=r;
imag=i;
}
void show(){
    
    cout<<"complex number is: "<<real<<"+i"<<imag<<endl<<endl;

}
~complex(){
    cout<<"destructor invoked"<<endl;
}
};

int main(){
    complex c1,c2(3,35);
    c1.input(1,2);
    c1.show();
    c2.show();
    complex c3=c1;
    c3.show();

    return 0;
    
}