#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout<<"Size = "<<vec.size()<<endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout<<"After push back size = "<<vec.size()<<endl;

    vec.pop_back();

    for(int value:vec)
    {
        cout<<value<<endl;
    }

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;


    
    return 0;
}
