#include<iostream>
using namespace std;

class student
{
    protected:
    char name[50];
    int roll;
    int age;
    public:
    void get()
    {
        cout << "Enter name age roll " << endl;
        cin >> name>>age>>roll;
    }

};

class test : public virtual student
{
    
    public:
    int marks[5];
    void getmarks(){
        cout<<"Enter marks: "<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks:"<<endl;
        for(int i=0;i<5;i++){
            cout<<marks[i]<<endl;
        }
    }
};

class sports : public virtual student
{
    protected:
    int msports;
    public:
        void getspo()
        {
            cout << "Enter marks in sports : ";
            cin >> msports;

        }
};

class result : public sports, public test
{
    int total=0;
    int tot;
    float percent;
    public:
    void display1()
    {
        cout << "Marks in sports = " << msports << endl;
         for(int i=0;i<5;i++){
            total=total+marks[i];
        }
        tot=total+msports;
        percent = (tot/600)*100;
        cout << "Total marks : " << tot << " Percent = " << percent << endl;
    }
};

int main()
{
    result ob1;
    ob1.get();
    ob1.getmarks();
    ob1.getspo();
   
    ob1.display();
    ob1.display1();
}