// Find the ONLY odd occuring element in array

// BASIC IDEA :: 
//1)XOR of same numbers equals to 0
//2)XOR of any number with 0 is that same number.

int find(int arr[],int n){
	int res = 0;
	for(int i = 0;i<n;i++){
		res = (res^arr[i]);
	}
	return res;
}