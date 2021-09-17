//Sum of digits of a number n

int sumd(int n){
	if(n==0){
		return 0;
	}
	else{
		return sumd(n/10)+n%10;
	}
}
