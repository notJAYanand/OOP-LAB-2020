//Jay Anand 1905089
/*v. WAP to count number of objects created from a class using concept of static data
members and static member function.*/

#include<iostream>
using namespace std;
class cou{
    static int count;
    public:
    cou(){
       int x= count++;
    }
    friend void dis(cou&);
};
int cou::count;
void dis(cou &a){
    cout<<a.count<<endl;
}
int main(){
    cou t1;
    
    cou t2;
    cou t3;
    dis(t1);
}