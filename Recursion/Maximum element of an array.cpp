// Maximum element of an array using Recursion

int mxRec(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	return max(arr[n-1],mxRec(arr,n-1));
}