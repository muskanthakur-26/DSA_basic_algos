// Printing a string n times using recursion

void prStr(string s,int n){
	if(n==0){
		return;
	}
	prStr(s,n-1);
	cout<<s;
	cout<<endl;
}