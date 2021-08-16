//LARGEST ELEMENT IN ARRAY

int getlargest(int arr[],int n){
	int res = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[res]){
			res = i;
		}
	}
	return res;
}