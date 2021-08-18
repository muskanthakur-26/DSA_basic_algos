// MAXIMUM CONSECUTIVE 1'S IN A BINARY ARRAY

int maxim(bool arr[],int n){
	int res = 0;
	int curr = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			curr=0;
		}
		else{
			curr++;
			res = max(res,curr);
		}
	}
	return res;
}
