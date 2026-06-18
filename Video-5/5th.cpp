#include<iostream>
using namespace std;

int SumOfDigits(int n)
{
    int dig,sum=0;
    while(n>0)
    {
        dig = n%10;
        sum = sum+dig;
        n = n/10;
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int m = SumOfDigits(n);
    cout<<"Sum of Digits : "<<m<<endl;
    return 0;

}