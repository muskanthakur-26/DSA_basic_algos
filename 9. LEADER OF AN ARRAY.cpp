// LEADER OR PEAK OF AN ARRAY

void array_peak(int arr[],int n){
	int curr = arr[n-1];
	cout<<curr;
	
	for(int i=(n-2);i>=0;i--){
		if(curr<arr[i]){
			curr = arr[i];
			cout<<curr;
		}
	}
}