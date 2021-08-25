// FINDING PEAK ELEMENT 

int peak(int arr[],int n){
	int start = 0;
	int end = n-1;
	while(start<=end){
		int mid = start + ((end-start)/2);
		if((mid ==0 || arr[mid-1]<=arr[mid]) && (mid == (n-1)) || arr[mid+1]<=arr[mid]){
			return mid;
		}
		if(mid>0 && arr[mid-1]>=arr[mid]){
			end = (mid-1);
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}