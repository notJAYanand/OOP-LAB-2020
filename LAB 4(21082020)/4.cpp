//Jay Anand 1905089
/*4.Create a class which stores name, roll number and total marks for a student. Input 
data for n students. Find the average marks scored by n students, store it as a data 
member of the class and display it using a function which may be called without 
object.*/
#include<iostream>
using namespace std;
class stud{
char a[50];
int roll;
int marks;
static float avg_marks;
public:
void input(char[],int,int);
friend void disp(stud[],int,stud&);
inline void display(void){cout<<avg_marks<<endl;};
};
void stud::input(char d[50],int c,int b){
for(int i=0;d[i]!='\0';i++){
    a[i]=d[i];
}
roll=c;
marks=b;
}
void disp(stud dr[],int n,stud &total){
    int sum=0;
    for(int k=0;k<n;k++){
       sum=sum+dr[k].marks;
    }
    float avg;
    avg=sum/n;
    total.avg_marks=avg;
 
}
float stud::avg_marks;
int main(){
int n;
char c[50];
int roll,marks;
cout<<"Enter n value: "<<endl;
cin>>n;
stud a[n];
stud b;
for(int i=0;i<n;i++){
    cin>>c>>roll>>marks;
    a[i].input(c,roll,marks);
}
disp(a,n,b);
b.display();
    return 0;
}