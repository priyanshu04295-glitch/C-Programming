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
    int min = a[0],max = a[0],minIndex=0,maxIndex=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            minIndex = i;
        }
        if(a[i]>max)
        {
            max = a[i];
            maxIndex = i;
        }
    }
    a[minIndex] = max;
    a[maxIndex] = min;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}