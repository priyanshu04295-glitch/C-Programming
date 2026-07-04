#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n] = {1,2,3,4,5};
    int maxSum = 0;
    int currSum = 0;
    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0)
        {
            currSum = 0;
        }
    }

    cout<<"Max Subarray Sum = "<<maxSum<<endl;

    return 0;
}