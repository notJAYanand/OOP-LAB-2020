#include <iostream>
using namespace std;
template<typename T>
class a{
    T *a; int n;
    public:
    void sort(T *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
    
    void swap(T &a,T &b){
        T temp=a;
        a=b;
        b=temp;
    }

};
int main(){
    a<int> obj1;
    a<float>obj2;
    int x[5]={1,2,5,4,3};
    float y[5]={1.1,3.3,2.2,5.5,4.4};
    obj1.sort(x,5);
    obj2.sort(y,5);

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