#include<iostream>
#include<vector>
using namespace std;

void reverseVector(vector<int>& vec,int size)
{
    for(int i=0;i<size/2;i++)
    {
        swap(vec[i],vec[size-i-1]);
    }
}

int main()
{

    vector<int> vec = {1,2,3,4,5};

    reverseVector(vec,vec.size());
    for(int val:vec)
    {
        cout<<val<<" "<<endl;
    }

    return 0;
}