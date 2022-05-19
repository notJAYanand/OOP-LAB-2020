#include <iostream>
using namespace std;
template<typename T>
T add(T x, T y){
    return(x+y);
}
int main(){
    cout<<"int sum "<<add<int>(3,4)<<endl;
    cout<<"float sum "<<add<float>(3.1f,4.4f)<<endl;

}