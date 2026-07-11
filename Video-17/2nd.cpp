#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar,int low,int high)
{
   int mid = low+(high-low)/2;

   if(tar==arr[mid])
   {
    return mid;
   }
   else if(tar>arr[mid])
   {
    return binarySearch(arr,tar,mid+1,high);
   }
   else if(tar<arr[mid])
   {
    return binarySearch(arr,tar,low,mid-1);
   }
   return -1;
}

int main()
{
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = 12,low1=0,high1=arr1.size()-1;
    

    cout<<binarySearch(arr1,tar1,low1,high1)<<endl;


    vector<int> arr2 = {-1,0,3,5,9,12};
    int tar2 = 0,low2=0,high2=arr2.size()-1;



    cout<<binarySearch(arr2,tar2,low2,high2)<<endl;
    return 0;
}