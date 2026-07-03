#include<iostream>
using namespace std;
int main()
{

    int nums[] = {5,15,22,1,-15,-24};
    int size = 6;
    int index = 0;

    int smallest = nums[0];

    for(int i=1;i<size;i++)
    {
        if(nums[i]<smallest)
        {
            smallest = nums[i];
            index = i;
        }
    }
    cout<<smallest<<endl;
    cout<<index<<endl;

    return 0;
}