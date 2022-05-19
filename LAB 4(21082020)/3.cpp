//Jay Anand 1905089
/*3.Create a class with an integer data member. Include functions for input and output in 
class. Count the number of times each function is called and display it.*/
#include <iostream>
using namespace std;
class item{
    static int count;
    int number;
    public:
    
    void getdata(int a){
        number=a;
        count++;
    }
    void getcount(void){
        cout<<"count : "<<count<<endl;

    }
};
int item :: count;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    
    a.getdata(10);
    a.getdata(20);
    a.getdata(30);

    cout<<"result"<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
return 0;
}