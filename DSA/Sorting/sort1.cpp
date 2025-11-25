#include <iostream>
using namespace std;

//selection sort
void selection(int arr[],int size)
{
    for (int i=0;i<size-1;i++)
    {
        int min_ind = i;
        for (int j=i;j<size;j++)
        {
            if (arr[j]<arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
}

//bubble sort
void bubble(int arr[],int size)
{
    for (int i=size-1;i>0;i--)
    {
        for (int j=0;j<i;j++)
        {
            if (arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}

//insertion sort - me
void insertion(int arr[],int size)
{
    for (int i=1;i<size;i++)
    {
        for(int j=i;j>0;j--)
        {
            if (arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
            break;
        }
    }
}

//insertion - standard
void insertion_std(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];   // shift right
            j--;
        }

        arr[j + 1] = key;  // insert key
    }
}

int main()
{
    // int arr[] = {4,3,2,1};
    int arr[] = {124,3141,514,13415,31,4,13,41,134,1341,4,13,4,3,14,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    // selection(arr,size);
    // bubble(arr,size);
    insertion(arr,size);
    for (auto it : arr)
    {
        cout<<it<<endl;
    }
}