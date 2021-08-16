// MOVING ZEROES AT END

void movezeroes(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],count);
			count++;
		}
	}
}