//Combination of N numbers 

int comb(int n,int r){
	if(r==0 || n==0 || n==r){
		return 1;
	}
	else if(r>n){
		return 0;
	}
	return comb(n-1,r-1)+comb(n-1,r);
}