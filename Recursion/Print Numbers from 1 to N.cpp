//Print 1 to N

// Sample input : 5
/*Sample output : 1
				  2
				  3
				  4
				  5
*/

void prNum(int n){
	if(n==0){
		return;
	}
	prNum(n-1);
	cout<<n;
	cout<<endl;
}				  