#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter the character = ";
    cin>>letter;
    int value = int(letter);
    if(value>=65&&value<=90)
    {
        cout<<"Uppercase"<<endl;
    }
    else if(value>=97&&value<=122)
    {
        cout<<"Lowercase"<<endl;
    }
    else
    {
        cout<<"Enter valid letter"<<endl;
    }

    return 0;
}
