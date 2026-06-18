#include<iostream>
using namespace std;

double sum(double a,double b)
{
    double s = a+b;
    return s;
}

int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    return a;
}

int main()
{

    cout<<sum(10.99,5.65)<<endl;
    cout<<min(10,5)<<endl;
    
    return 0;
}