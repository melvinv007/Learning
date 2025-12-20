#include <iostream>
using namespace std;

void rightRotateArrayOnce(int arr[],int size)
{
    int temp=arr[size-1];
    for(int j=size-1;j>=1;j--) arr[j]=arr[j-1];
    arr[0]=temp;
}
void leftRotateArrayOnce(int arr[],int size)
{
    int temp=arr[0];
    for(int j=0;j<size-1;j++) arr[j]=arr[j+1];
    arr[size-1]=temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    printArray(arr, size);

    rightRotateArrayOnce(arr,size);
    //leftRotateArrayOnce(arr,size);

    cout << "Final:    ";
    printArray(arr, size);
    return 0;
}
