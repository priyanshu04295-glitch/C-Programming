#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age = ";
    cin>>age;
    if(age>=18)
    {
        cout<<"You can vote";
    }
    else
    {
        cout<<"You can't vote";
    }
    return 0;
}