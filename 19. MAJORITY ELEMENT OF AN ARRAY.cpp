//MAJORITY ELEMENT OF AN ARRAY
// **MAJORITY ELEMENT OF AN ARRAY REFERS TO AN ELEMENT WHOSE OCCURENCE IS MORE THAN HALF OF THE SIZE OF THE ARRAY.
// FOR EXAMPLE : IF ARRAY SIZE IS 6 THEN MAJORITY ELEMENT WILL BE THE ONE WHOSE OCCURENCE IN THE ARRAY IS GREATER THAN OR EQUAL TO 4.

int find(int arr[],int n){
	int res = 0;
	int count = 1;
	
	for(int i=0;i<n;i++){
		if(arr[res] == arr[i]){
			count++;
		}
		else{
			count--;
		}
		if(count == 0){
			res = i;
			count = 1;
		}
	}
	//checking if the found element is actually majority or not
	count = 0;
	for(int i=0;i<n;i++){
		if(arr[res]==arr[i]){
			count++;
		}
	}
	if(count <= n/2){
		res--;
	}
	return res;
}