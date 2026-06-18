#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int fib1=0,fib2=1;
    cout<<fib1<<" "<<fib2<<" ";
    for(int i=0;i<n;i++)
    {
        int fib3=fib1+fib2;
        cout<<fib3<<" ";
        fib1=fib2;
        fib2=fib3;
    }
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    fibonacci(n);


}