// REMOVE DUPLICATES FROM ARRAY
//NOTE : you can also use set for avoiding repitation of elements in array

int remove(int arr[],int n){
	int res = 1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[res-1]){
			arr[res] = arr[i];
			res++;
		}
	}	
	return res;
}