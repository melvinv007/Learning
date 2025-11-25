#include <iostream>
using namespace std;

//reversing array

void swap(int& a,int& b)
{
    int temp = a;
    a=b;
    b=temp;
}

// 2 pointers
void rev(int arr[],int l,int r)
{
    if (l>=r || arr[l]==arr[r]) return;
    swap(arr[l],arr[r]);
    rev(arr,l+1,r-1);
}

//1 pointer
void rev2(int arr[],int size,int p)
{
    if (p>size/2) return;
    swap(arr[p],arr[size-p-1]);
    rev2(arr,size,p+1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // rev(arr,0,n-1);
    rev2(arr,n,0);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}