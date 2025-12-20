#include <iostream>
using namespace std;

// brute - using set data structure

// optimal
int main()
{
    // int randomArr[] = {100,100,64, 64,90,10,10,34, 25, 12, 22, 11, 90,44};
    int randomArr[] = {25, 12, 12, 11, 90,44};
    // int randomArr[] = {1,1,2,2,2,3,3};
    // int randomArr[] = {9,8,7,6,5,4,3,2,1};
    int size = sizeof(randomArr) / sizeof(randomArr[0]);
    int uniquePointer=1;
    for (int itemPointer=1;itemPointer<size;itemPointer++)
    {
        if (randomArr[itemPointer-1] != randomArr[itemPointer])
        {
            randomArr[uniquePointer] = randomArr[itemPointer];
            uniquePointer++;
        }
    }
    for ( ;uniquePointer<size;uniquePointer++)
    {
        randomArr[uniquePointer] = 0;
    }
    for (int i=0;i<size;i++)
    {
        cout<<randomArr[i]<<endl;
    }
}