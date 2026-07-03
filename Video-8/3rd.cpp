#include<iostream>
using namespace std;
int main()
{

    int nums[] = {5,15,22,1,-15,-24};
    int size = 6;

    int largest = nums[0];
    int index = 0;

    for(int i=1;i<size;i++)
    {
        if(nums[i]>largest)
        {
            largest = nums[i];
            index = i;
        }
    }
    cout<<largest<<endl;
    cout<<index<<endl;

    return 0;
}