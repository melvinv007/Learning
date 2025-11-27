#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int temp[high-low+1];
    int temp_pointer=0;
    int l_pointer = low;
    int r_pointer = mid+1;
    while (l_pointer<=mid && r_pointer <=high)
    {
        if (arr[l_pointer]<=arr[r_pointer])
        {
            temp[temp_pointer] = arr[l_pointer];
            temp_pointer++; l_pointer++;
        }
        else
        {
            temp[temp_pointer] = arr[r_pointer];
            temp_pointer++; r_pointer++;
        }
    }
    while(l_pointer<=mid)
    {
        temp[temp_pointer] = arr[l_pointer];
        temp_pointer++; l_pointer++;
    }
    while(r_pointer<=high)
    {
        temp[temp_pointer] = arr[r_pointer];
        temp_pointer++; r_pointer++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i] = temp[i-low];
    }
}

void divide(int arr[],int low, int high)
{
    if (low==high) return;
    int mid = (low + high)/2;
    divide(arr,low,mid);
    divide(arr,mid+1,high);
    merge(arr,low,mid,high);
}

//merge sort withour recursion
void mergesort (int arr[],int low , int mid , int high)
{
    
}

int main()
{
    int arr[] = {124,3141,514,13415,31,4,13,41,134,1341,4,13,4,3,14,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,size-1);
    for (auto it : arr)
    {
        cout<<it<<endl;
    }
}