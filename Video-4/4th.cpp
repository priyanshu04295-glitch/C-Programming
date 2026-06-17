#include<iostream>
using namespace std;
int main()
{

    int n=3,count=1;
    for(int i=0;i<n;i++)
    {
        
        for(int j=1;j<=n;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}