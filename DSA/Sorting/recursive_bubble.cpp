#include <iostream>
using namespace std;

bool sorted(int arr[],int size)
{
    int i = 0;
    while(i<size-1)
    {
        if (arr[i]>arr[i+1]) return false;
        i++;
    }
    return true;
}

void recur_bubble(int arr[],int size)
{
    if (size<=1) return;
    int i = 0;
    while (i<size-1)
    {
        if (arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        i++;
    }
    recur_bubble(arr,size-1);
}

int main()
{
    int arr[] = {124,3141,514,13415,31,4,13,41,134,1341,4,13,4,3,14,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    recur_bubble(arr,size);
    for (auto it : arr)
    {
        cout<<it<<endl;
    }
}