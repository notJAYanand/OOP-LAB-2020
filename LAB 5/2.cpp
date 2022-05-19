//Jay Anand 1905089

/*ii. Create a class which stores time in hh:mm format. Include all the constructors. The
parameterized constructor should initialize the minute value to zero, if it is not
provided. */

#include <iostream>
using namespace std;
class time{
    private:
    int hrs;
    int min;
    
    
    public:
    //para cons
    time(int h=0,int m=0){
        cout<<"para"<<endl;
        hrs=h;
        min=m;
        
    }
    void set(int h,int m){
        hrs=h;
        min=m;
        }
    void show(){
        if(min>60){
            hrs=hrs+min/60;
            min=min%60;
        }
        cout<<"Time is- "<<hrs<<":"<<min<<endl;
    }
    ~time(){
        cout<<"destructor invoked"<<endl;
    }
};
int main(){
    time t1,t2(12,1000);
    
    t1.show();
    t2.show();

return 0;
}