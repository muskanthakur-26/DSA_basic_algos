// Searching In an Infinite Array

int search(int arr[],int n){
	if(arr[0]==n){
		return 0;
	}
	int i =1;
	while(arr[i]<n){
		i*=2;
	}
	if(arr[i]==n){
		return i;
	}
	return binary_search(arr,n,i/2+1,i);
	
}
//NOTE : the function for Binary Search is given in the first two cpp files of this folder