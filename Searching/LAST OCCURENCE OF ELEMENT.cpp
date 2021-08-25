//LAST OCCURENCE OF AN ELEMENT IN AN ARRAY

int l_occ(int arr[],int x,int start,int end){
	while(start<=end){
		int mid = (start + (end-start)/2);
		if(arr[mid]<x){
			start = (mid+1);
		}
		else if(arr[mid]>x){
			end = (mid-1);
		}
		else{
			if(mid == (n-1) || (arr[mid] != arr[mid+1])){
				return mid;
			}
			else{
				end = mid-1;
			}
		}
	}
	return -1;
}