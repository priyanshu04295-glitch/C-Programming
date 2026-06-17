#include<iostream>
using namespace std;
int main()
{

    int n=4;
    for(int i=65;i<=68;i++)
    {
        char ch=(char)i;
        for(int j=65;j<=i;j++)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }

    return 0;
}