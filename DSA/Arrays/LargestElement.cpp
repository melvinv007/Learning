#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void LargestElement(int arr[],int size)
{
    int max = arr[0];
    for (int i=1;i<size;i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    cout<<max<<endl;
}

int main()
{
    int randomArr[] = {64, 34, 25, 12, 22, 11, 90,44};
    int n1 = sizeof(randomArr) / sizeof(randomArr[0]);
    cout << "Original: ";
    printArray(randomArr, n1);
    LargestElement(randomArr, n1);
}