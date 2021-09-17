//Subset sum 
//QUE: you are given an array and a value of sum u need to count the number of subsets of the array that gives the sum equal to the given sum.
int subsetsum(int arr,int n){
	if(n==0){
		if(sum==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	return subsetsum(arr,n-1,sum)+(arr,n-1,sum-arr[n-1]);
}
