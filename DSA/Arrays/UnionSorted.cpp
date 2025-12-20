#include <iostream>
using namespace std;

int main()
{
	int arr1[] = [1,1,2,3,4,5,5,5,6];
	int s1 = sizeof(arr1)/sizeof(arr1[0]);
	int arr2[] = [1,2,2,3,4,4,5,5,6];	
	int s2 = sizeof(arr2)/sizeof(arr2[0]);
	int union[s1+s2];
	int i=0,j=0,k=0;
	while (i<s1 && j<s2)
	{
		if (arr1[i] < arr2[j] && arr[i] )
		{
			union[k] = 



