#include <iostream>
using namespace std;
template<typename T>
class n{
    int a,b;
    public:
    T add(T x, T y){
        return(x+y);
    }
};
int main(){
    n<int> a1;
    n<float> a2;
    cout<<"int sum "<<a1.add(3,4)<<endl;
    cout<<"float sum "<<a2.add(3.1f,4.4f)<<endl;

}