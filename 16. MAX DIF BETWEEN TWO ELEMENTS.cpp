
//Function to max diff between elements
void maxdif(int arr[], int arr_size)
{
	int i=1;
	int mxdif=INT_MIN;
	sort(arr, arr + arr_size);
	for (i =1; i <arr_size; i++) 
	{
		mxdif=max(mxdif,arr[i]-arr[i-1]);
	}
	return mxdif;
}
