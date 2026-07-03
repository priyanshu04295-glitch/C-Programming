#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum = 0,prod=1;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i];
        prod = prod*a[i];
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Product = "<<prod<<endl;

    return 0;
}