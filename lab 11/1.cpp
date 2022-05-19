#include <iostream>
using namespace std;
template<typename T>
void sort(T *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
template <typename X>
void swap(X &a,X &b){
    X temp=a;
    a=b;
    b=temp;
}
int main(){
    int x[5]={1,2,5,4,3};
    float y[5]={1.1,3.3,2.2,5.5,4.4};
    sort<int>(x,5);
    sort<float>(y,5);

    cout<<"int \n";
    for(int i=0;i<5;i++){
        cout<<x[i]<<"\t";
    }
    cout<<endl;
    cout<<"float \n";
    for(int i=0;i<5;i++){
        cout<<y[i]<<"\t";
    }
    cout<<endl;
}