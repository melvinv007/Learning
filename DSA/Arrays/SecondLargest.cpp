#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// int  SecondLargest(int arr[],int n)
// {
//     int max = arr[0];
//     for (int i=1;i<n;i++)
//     {
//         if (max < arr[i]) max = arr[i];
//     }
//     int secMax=INT16_MIN;
//     for (int i=0;i<n;i++)
//     {
//         if (arr[i] < max && secMax < arr[i]) secMax = arr[i];
//     }
//     return secMax;
// }
int  SecondLargest(int arr[],int n)
{
    int max=arr[0] ,secMax=-1;
    for (int i=1;i<n;i++)
    {
        if (arr[i]>max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i]<max && arr[i]>secMax) secMax = arr[i];
    }
    return secMax;
}



int main()
{
    int randomArr[] = {100,100,64, 64,90,10,10,34, 25, 12, 22, 11, 90,44};
    int n1 = sizeof(randomArr) / sizeof(randomArr[0]);
    cout << "Original: ";
    printArray(randomArr, n1);
    cout<<SecondLargest(randomArr, n1)<<endl;
}