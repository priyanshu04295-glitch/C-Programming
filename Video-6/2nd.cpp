#include<iostream>
using namespace std;

int BinToDec(int n)
{
    int decimal=0,pow=1;
    while(n>0)
    {
        int rem = n%10;
        decimal = decimal+(rem*pow);
        n = n/10;
        pow = pow*2;
    }
    return decimal;
}

int main()
{

    int n;
    cout<<"Enter the binary number : ";
    cin>>n;
    cout<<BinToDec(n)<<endl;


    return 0;
}