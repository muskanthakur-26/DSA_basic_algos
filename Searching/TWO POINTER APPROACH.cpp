//TWO POINTER APPROACH

//SAMPLE QUESTION 1 :: Check if the sum given in the question can be obtained from any pair of elements of this array.

bool twop(int arr[],int x){
	int start = 0;int end = n-1;
	
	while(start<end){
		if(arr[start]+arr[end]==x){
			return true;
		}
		if(arr[start]+arr[end]>x){
			end--;
		}
		else{
			start++;
		}
	}
	return false;
}

