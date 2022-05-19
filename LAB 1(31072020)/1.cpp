//Jay Anand 1905089
/*1.Write a program to pass an entire array to a function:
 a)print all the elements.
 b)return largest element.*/
#include <iostream>
using namespace std;
 char print(int a[],int p){
   for(int i=0;i<p;i++)
   cout<<a[i]<<endl;
 }

 char large(int a[],int p){
int lar=a[0];
   for(int i=0;i<p;i++){ 
     if(a[i]>lar){
       lar=a[i];
     }
   }
cout<<lar<<endl;
 }

 int main(){
   int arr[5]={10,20,30,40,50};
   print(arr,5);
   large(arr,5);
   return 0;
 }
