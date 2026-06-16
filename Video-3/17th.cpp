#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter number of lines = ";
    cin>>m;
    cout<<"Enter number of stars = ";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}