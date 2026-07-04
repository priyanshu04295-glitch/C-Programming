#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> vec1 = {1,2,3};
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
    for(int val : vec1)
    {
        cout<<val<<" ";
    }

    return 0;
}