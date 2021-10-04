//Insertion Sort
/* In-place
   Stable
   O(n^2) solution
   theta(n)-best case
*/

void InsSort(int arr[],int n){
	for(int i = 1;i<n;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

