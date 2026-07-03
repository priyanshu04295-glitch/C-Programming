#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the 1st array : ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the 1st array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cout<<"Enter the size of the 2nd array : ";
    cin>>m;
    int b[m];
    cout<<"Enter the elements of the 2nd array : ";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    cout<<"Intersection : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }

    

    return 0;
}