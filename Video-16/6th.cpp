#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    cout<<arr<<endl;
    cout<<*(arr)<<endl;
    cout<<*(arr+1)<<endl;
    
    int* ptr1;
    int* ptr2=ptr1;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    cout<<(ptr1!=ptr2)<<endl;
    return 0;
}