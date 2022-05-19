#include<iostream>
using namespace std;
class two;
class one{
    int val1;
    public:
    one();
    one(int a){
        val1=a;
    }
    friend int compare(one *,two*);
};
class two{
    int val2;
    public:
    two();
    two(int b){
        val2=b;
    }
    friend int compare(one *,two*);
};
int compare(one *first,two *second){
    if(first->val1 == second->val2){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    one p(69);
    two q(420);
  
    int check=compare(&p,&q);
    if(check==1){
        cout<<"Not equal"<<endl;
    }else if(check==0){
        cout<<"Equal"<<endl;
    }
}