#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{

    int n,r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;

    int BC = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"Binomial Coefficient = "<<BC<<endl;


    return 0;
}