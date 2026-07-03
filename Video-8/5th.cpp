#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 50;

   cout<<linearSearch(arr,sz,target)<<endl;

    return 0;
}