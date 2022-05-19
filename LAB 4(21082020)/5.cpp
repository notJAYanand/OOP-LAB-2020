//Jay Anand 1905089
/*5.Create a class which stores name, author and price of a book. Store information for 
n number of books. Display information of all the books in a given price range using 
friend function.*/
#include<iostream>
using namespace std;
class book{
char a[50];
char b[50];
int price;
public:
void get();
friend void display(book[],int,int,int);
};
void book::get(){
cin>>a>>b>>price;   
}
void display(book a[],int n,int q,int r){
for(int i=0;i<n;i++){
if(a[i].price>=q && a[i].price<=r){
    cout<<"Name:"<<a[i].a<<" Price:"<<a[i].price<<endl;
}
}
}
int main(){
    int n;
    cout<<"Enter n value:"<<endl;
    cin>>n;
    book p[n];
    for(int i=0;i<n;i++){
        cout<<"Enter details"<<endl;
        p[i].get();
    }
    cout<<"Enter display range"<<endl;
    int q,r;
    cin>>q>>r;
    display(p,n,q,r);
}