#include<iostream>
using namespace std;
int main()
{

    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int k=n-i-1;k>0;k--)
        {
            cout<<"  ";
        }
        for(int l=0;l<i+1;l++)
        {
            cout<<"*";
        }


        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}