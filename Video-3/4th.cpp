#include<iostream>
using namespace std;
int main()
{
    int marks;
    char grade;
    cout<<"Enter the marks = ";
    cin>>marks;
    
    if(marks>=90)
    {
        grade = 'A';
    }
    else if(marks>=80&&marks<90)
    {
        grade = 'B';
    }
    else if(marks<80)
    {
        grade = 'C';
    }
    cout<<"Grade = "<<grade<<endl;
    


    return 0;
}