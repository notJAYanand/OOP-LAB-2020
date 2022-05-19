#include <iostream>
using namespace std;

class student{
    char section;
    int age;

    public:
    void get_info(){
        cin >> section; cin >> age;
        cout << "Section: " << section << "age: " << age;
    }
};

class grade:private student{
    int marks[4];
    int roll;
    char name[20];

    public:
    int avg(){
        cout <<endl<< "roll: ";
        cin>>roll;
        cout << "name: ";
        cin >> name;
        cout << "enter 4 marks: ";
        for(int i=0; i<4; i++){
            cin>>marks[i];
        }

        int avg = 0;
        for(int i=0; i<4; i++){
            avg = avg + marks[i];
        }

        cout << "avg is: " << avg/4;

        return avg;
    }
};

int main(){

    grade s1, s2;
    s1.avg();
    s2.avg();
    
    return 0;
}