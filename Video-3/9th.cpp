#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the limit = ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
        
    }
    cout<<"Sum = "<<sum<<endl;

    return 0;
}