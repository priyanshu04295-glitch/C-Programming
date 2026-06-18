#include<iostream>
using namespace std;

int isPrime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int m = isPrime(n);
    if(m==1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}