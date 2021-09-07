// Sum of elements of an array using Recursion

int sum(int arr[],int n){
	if(n<=0){
		return 0;
	}
	return arr[n-1]+sum(arr,n-1);
	
}