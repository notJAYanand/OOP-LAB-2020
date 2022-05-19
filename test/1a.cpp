#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        int inch;
    public:
         Distance ();
        void input  ();
        void show ();
        Distance add( Distance d2 );
    
};
 
Distance:: Distance ()
{ feet=0; inch =0;
}
 
void Distance:: input()
{ cout << "Enter Value of feets : "; cin >> feet;
cout << "Enter value of inches : "; cin >> inch;
     
 if(inch>=12){
     feet=feet+(12-inch);
 }
}
 
void Distance:: show()
{
    cout << endl << "\tFeets : " << feet;
    cout << endl << "\tInches: " << inch;
}
 
 
Distance Distance:: add( Distance d2 )
{
    Distance temp;
 
    temp.feet = feet + d2.feet;
    temp.inch = inch + d2.inch;
 
    if( temp.inch >= 12)
    {
        temp.feet++;
        temp.inch=temp.inch-12;        
    }
    return temp;    
}
 

 
int main()
{
    Distance d1,d2,d3;
    
    cout << "Distance1 : " << endl;
    d1.input(); 
    cout << "Distance2 : " << endl;
    d2.input();
    d3 = d1.add(d2);
    cout << endl << "D1 : " ;
    d1.show();
    cout << endl << "D2 : " ;
    d2.show();
    cout << endl << "sum : " ;
    d3.show();

 
    cout << endl;         
    return 0;
}