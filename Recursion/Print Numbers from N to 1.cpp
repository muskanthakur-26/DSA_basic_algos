// Print numbers from N to 1
/* Sample Input : 4
   Sample Output : 4 3 2 1
*/   
void prNum(int n){
	if(n==0){
		return;
	}
	cout<<n;
	if(n!=1){
		cout<<" ";
	}
	prNum(n-1);
	
}