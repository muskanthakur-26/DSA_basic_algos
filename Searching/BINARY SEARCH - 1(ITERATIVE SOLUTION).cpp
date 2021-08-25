//BINARY SEARCH

int search(int arr[n],int x,int start,int end){
	while(start<=end){
		int mid = (start + ((end-start)/2));
		
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]<x){
			start = (mid+1);
		}
		else{
			end = (mid-1);
		}
	}
	return -1;
}