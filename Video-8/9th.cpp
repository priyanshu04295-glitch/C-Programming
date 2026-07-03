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
    for(int i=0;i<n;i++)
    {
        int j=i-1,flag=0;
        while(j>=0)
        {
            if(a[j]==a[i])
            {
                flag=1;
            }
            j--;
        }
        if(flag==0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}