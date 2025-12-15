#include <iostream>
using namespace std;

void selection_sort(int arr[],int size)
{
    for (int i = 0; i<size ;i++)
    {
        int min_ind = i;
        for (int j = i ;j<size;j++)
        {
            if (arr[min_ind]>arr[j])
            {
                swap(arr[min_ind],arr[j]);
                // min_ind = j; //wrong
            }
        }
    }
}

void bubble_sort (int arr[],int size)
{
    for (int i=size-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if (arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}

void insertion_sort(int arr[],int size)
{
    for (int i=1;i<size;i++)
    {
        for (int j=i;j>0;j--)
        {
            if (arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
        }
    }
}



void merge(int arr[],int low,int mid,int high)
{
    int* temp = new int[high - low + 1];
    int temp_ind=0;
    int i=low,j=mid+1;
    while (i<=mid && j<=high)
    {
        if (arr[i]<=arr[j] && i<=mid)
        {
            temp[temp_ind] = arr[i];
            i++; temp_ind++;
        }
        else if (arr[i]>arr[j] && j<=high)
        {
            temp[temp_ind] = arr[j];
            j++; temp_ind++;
        }
    }
    while (i<=mid)
    {
        temp[temp_ind] = arr[i];
        i++; temp_ind++;
    }
    while (j<=high)
    {
        temp[temp_ind] = arr[j];
        j++; temp_ind++;
    }
    for (int i=low;i<=high;i++)
    {
        arr[i]= temp[i-low];
    }
    delete temp;
}
void merge_sort(int arr[],int low,int high)
{
    if (low>=high) return;
    int mid = (low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge (arr,low,mid,high);
}


void quick_sort(int arr[],int low,int high) //pretty much
{
    int ind_pivot = low;
    int i=low,j=high;
    while (i<=j)
    {
        while (i<=high)
        {
            if (arr[i]>arr[ind_pivot]) break;
            i++;
        }
        while (j>=low)
        {
            if (arr[j]<arr[ind_pivot]) break;
            j--;
        }
        if (i>=j) swap(arr[ind_pivot],arr[j]);
        else swap(arr[i],arr[j]);
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int randomArr[] = {64, 11, 64, 34, 25, 12, 22, 11, 90,44};
    int n1 = sizeof(randomArr) / sizeof(randomArr[0]);
    cout << "Original:    ";
    printArray(randomArr, n1);
    merge_sort(randomArr,0,n1-1);
    std::cout << "QuickSorted: ";
    printArray(randomArr, n1);
}