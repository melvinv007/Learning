#include <iostream>
using namespace std;

void quick(int arr[], int low ,int high)
{
    if (low >= high) return;
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while (i<=high && arr[i]<=pivot) i++;
        while (j>=low && arr[j]>pivot) j--;
        if (i<j) swap(arr[j],arr[i]);
    }
    swap(arr[j],arr[low]);
    quick(arr,low,j-1); quick(arr,j+1,high);
}

int main()
{
    int arr[] = {124,3141,514,13415,31,4,13,41,134,1341,4,13,4,3,14,1,3};
    // int arr[] = {4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,size-1);
    for (auto it : arr)
    {
        cout<<it<<endl;
    }
}