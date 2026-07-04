#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> vec = {'a','b','c','d'};

    cout<<"Size = "<<vec.size()<<endl;

    for(char val : vec){
        cout<<val<<endl;
    }


    
    return 0;
}
