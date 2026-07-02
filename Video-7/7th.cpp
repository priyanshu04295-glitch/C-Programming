#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int reverse=0,dig;
    while(n>0)
    {
        dig = n%10;
        reverse = (reverse*10)+dig;
        n=n/10;
    }
    cout<<"The reverse of the number is : "<<reverse<<endl;

    return 0;
}