
#include <bits/stdc++.h>
using namespace std;
//Function to print the second largest elements
void print2largest(int arr[], int arr_size)
{
	int i, first, second;
	sort(arr, arr + arr_size);
	for (i = arr_size - 2; i >= 0; i--) 
	{
		if (arr[i] != arr[arr_size - 1]) 
		{
			cout<<"The second largest element is"<<arr[i]<<endl;
			return;
		}
	}
}
