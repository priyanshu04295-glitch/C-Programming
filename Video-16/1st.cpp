#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a=10;
    int* ptr = &a;

    cout<<ptr<<endl;

    cout<<&a<<endl;

    cout<<&ptr<<endl;

    int** ptr2 = &ptr;
    cout<<ptr2<<endl;

    cout<<*(&a)<<endl;

    cout<<*(ptr)<<endl;

    cout<<*(ptr2)<<endl;

    cout<<**(ptr2)<<endl;

    int** ptr3 = NULL;
    cout<<ptr3<<endl;

    return 0;
}