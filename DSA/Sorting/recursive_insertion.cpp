#include <iostream>
using namespace std;

void recur_inser(int arr[],int i,int size)
{
    if (i>size) return;
    for (int j=i;j>0;j--)
    {
        if (arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
    }
    recur_inser(arr,i+1,size);
}

int main()
{
    // int arr[] = {124,3141,514,13415,31,4,13,41,134,1341,4,13,4,3,14,1,3};
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    recur_inser(arr,0,size-1);
    for (auto it : arr)
    {
        cout<<it<<" ";
    }
}