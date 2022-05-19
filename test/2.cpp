#include <iostream>
using namespace std;
class student{
    int sec;
    int age;
    public:
    void inage(int a){
        age=a;}
    void insec(int s){
            sec=s;
        }
    void pdisplay(){
        cout<<"age :"<<age<<endl<<"section: "<<sec<<endl;
    }

};
class grade ::public student{
    char n[30];
    int roll;
    int m[4];
    
    public:
    void get_name(){cin>>n;}
    void get_marks(){cin>>m1>>m2>>m3>>m4;}
    void get_roll(){cin>>roll;}
    void avg(){
        float avg=(m1+m2+m3+m4)/4.0;
        cout<<"avg is: "<<avg<<endl;
    }
    void display(){
        cout<<"name: "<<n<<endl;
        cout<<"marks: "<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl;
        cout<<"roll no: "<<roll<<endl;
    }
};

int main(){
    grade g1,g2;
    g1.get_name();
    g1.get_marks();
    g1.get_roll();
    g1.inage();
    g1.insec();
    g1.avg();
    g1.display();
    g1.pdisplay();

        g2.get_name();
    g2.get_marks();
    g2.get_roll();
    g2.inage();
    g2.insec();
    g2.avg();
    g2.display();
    g2.pdisplay();
}