// Power Of 2
// Note : If a number is power of two then it has only one set bit

bool pow2(int n){
	if(n==0){
		return false;
	}
	return ((n&(n-1))==0);
}