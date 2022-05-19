#include <iostream>
#include <string>
using namespace std;
class complex
{
int i;
int j;
 public:
complex(int a, int b)
 {
i = a;
j = b; }
complex operator+(complex c)
 {
complex temp;
temp.i = this->i + c.i;
temp.j = this->j + c.j;
return temp; }
void show(){
cout<<"Complex Number: "<<i<<" + i"<<j<<endl; } };
int main(int argc, char const *argv[]) {
complex c1(1,2);
complex c2(3,4);
complex c3 = c1 + c2;
c3.show();
return 0; }