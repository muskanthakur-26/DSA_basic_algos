//TOWER OF HANOI

void toh(int n, char a,char b,char c){
	if(n==1){
		cout<<"Move "<<n<<" from "<<a<<" to "<<c;
		return;
	}
	toh(n-1,a,c,b);
	cout<<"Move "<<n<<" from "<<a<<" to "<<c;
	toh(n-1,b,a,c);
}
