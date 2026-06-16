#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=1;
    cout<<"Enter the limit = ";
    cin>>n;
    while(i<=n)
    {
        
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
        
    }
    cout<<"Odd sum = "<<sum<<endl;

    return 0;
}