#include<iostream>
using namespace std;
int main()
{
    int a=10;

    int b=a++;
    cout<<b<<endl;
    cout<<a<<endl;

    int d=10;
    int c=++d;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
