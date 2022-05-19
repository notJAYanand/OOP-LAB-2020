//Jay Anand 1905089
/*iii. Create a class which stores a sting and its length as data members. Include all the
constructors. Include a member function to join two strings and display the
concatenated string.*/

#include<iostream>
#include<string.h>
using namespace std;
class join{
int l;
char a[50];
public:
//def cons
join(){
    cin>>a;
    l=strlen(a);
};
//para
join(char a[]){
l=strlen(a);
int i;
for(i=0;a[i]!='\0';i++)
a[i]=a[i];
a[i]='\0';
}
//cpy
join(join &c1){
    int i=0;
    l=c1.l;
  
    for(i;c1.a[i]!='\0';i++)
      a[i]=c1.a[i];
      a[i]='\0';
}
void add(join &,join &);
void display(){
    cout<<a<<endl;
}
};
void join::add(join &c1,join &c2){
    char c[50];
    strcpy(c,c1.a);
    strcat(c,c2.a);
    cout<<c<<endl;
}

int main(){
    join j1;
    join j2(j1);
    j1.display();
    j2.display();
    j1.add(j1,j2);

}