/*v. WAP to count following in a given file:
c. No.of lines*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int count=0;
    string line;
    ifstream file("prog5");
    while (getline(file, line)){
        count++;
    }
    cout << "Numbers of lines : " << count << endl;
    return 0;
}