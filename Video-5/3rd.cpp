#include<iostream>
using namespace std;

int sumToN(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    return sum;
}

int main()
{

    cout<<sumToN(10)<<endl;

    return 0;
}