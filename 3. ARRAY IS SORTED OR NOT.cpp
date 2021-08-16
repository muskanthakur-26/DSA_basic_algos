//CHECK IF ARRAY IS SORTED

bool is_sorted(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
		return true;
	}
}