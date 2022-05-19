//Jay Anand 1905089
/*2. Write a program in C++to create a class to show overloading of member functions 
where make one member function as inline and another as non inline.*/
#include <iostream>
using namespace std;
class inline {
int roll;
int marks;
public:
void get();
void display(){cout<<roll<<"\t"<<marks<<endl;
};                                                                                 //without  inline 
void display(int);
};
void inline::get(){
    cin>>roll>>marks;
}
inline void inline::display(int i){                                                //inline..
 roll=i;   //default value given by user..
 marks=i;
 cout<<roll<<"\t"<<marks<<endl;
}
int main(){
    two s1;
    s1.get();
    s1.display();
    s1.display(55);
    return 0;
}