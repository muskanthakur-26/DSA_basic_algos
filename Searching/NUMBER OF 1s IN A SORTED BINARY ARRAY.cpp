//COUNT NUMBER OF 1s IN A SORTED BINARY ARRAY

int solve(int arr[],int n){
	int start = 0;
	int end = n-1;
	
	while(start<=end){
		int mid = start + (end-start)/2;
		if(arr[mid] == 0){
			start = mid+1;
		}
		else{
			if(mid == 0 || arr[mid-1]==0){
				return n-mid;
			}
			else{
				end = mid-1;
			}
		}
	}
	return 0;
}