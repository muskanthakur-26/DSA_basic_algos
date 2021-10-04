//Selection Sort

/* In-place algorithm (no extra space required for sorting)
   Not stable
   Basic idea of heap sort
   O(n^2) solution
*/

// Naive approach

void SelectionSort(int arr[],int n){
	int temp[n];
	for(int i = 0;i<n;i++){
		int min_ind = 0;
		for(int j = 1;j<n;j++){
			if(arr[j]<arr[min_ind]){
				min_ind = j;
				
			}
		}
		temp[i]=arr[min_ind];
		arr[min_ind]=INF;
	}
	for(int i = 0;i<n;i++){
		arr[i]=temp[i];
	}
}

//Efficient Approach

void SelectionSort(int arr[],int n){
	for(int i = 0;i<n;i++){
		int min_ind = i;
		for(int j = i+1;j<n;j++){
			if(arr[j]<arr[min_ind]){
				min_ind = j;
			}
		}
		swap(arr[j],arr[min_ind]);
	}
}

