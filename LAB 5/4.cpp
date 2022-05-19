//Jay Anand 1905089
/*4.WAP to demonstrate the order of call of constructors and destructors for a class. */

#include <iostream>
#include <string>
using namespace std;
class car{
    string com;
    string model;
    int price;

    public:
    //default cons
    car(){
        //com="maruti";
        cout<<"default cons called"<<endl<<endl;
    }
    //para cons
    car(string c,string m,int p){
       cout<<"para cons called"<<endl;
        com=c;
        model=m;
        price=p; 
    }
    //cpy cons
    car(car &obj){
        cout<<"copy cons called"<<endl;
        com=obj.com;
        model=obj.model;
        price=obj.price; 

    }
    

    void data(string c,string m,int p){
        com=c;
        model=m;
        price=p;  


    }
    void display(){
        cout<<"car details"<<endl;
        cout<<"company: "<<com<<endl;
        cout<<"model: "<<model<<endl;
        cout<<"price: "<<price<<endl<<endl;
    } 
    //des
    ~car(){
        cout<<"destructor called"<<endl;
    }
    
};
int main(){
    car car1,car2("ferrari","alto",50);
    
    car1.data("maruti","nano",20);
    car1.display();
    car2.display();
    car car3=car1;//cpy cons kicks in
    car3.display();
    
    return 0;
}