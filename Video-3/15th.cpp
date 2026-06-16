#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    bool isPrime = true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"Is a prime number";
    }
    else
    {
        cout<<"Not a prime number";
    }

    return 0;
}