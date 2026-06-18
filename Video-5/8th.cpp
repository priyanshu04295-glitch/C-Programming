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


void PrimeUptoN(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i)==1)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    PrimeUptoN(n);


    return 0;
}