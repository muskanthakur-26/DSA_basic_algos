//BUBBLE SORT 

//Basic implementation (T.C. : O(n^2)
//stable algorithm
void bubbleSort(int arr[],int n){
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

//Optimized implementation

void bubbleSort(int arr[],int n){
	for(int i = 0;i<n-1;i++){
		bool swapped = false;
		for(int j = 0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
		if(swapped==false){
			break;
		}
	}
}

