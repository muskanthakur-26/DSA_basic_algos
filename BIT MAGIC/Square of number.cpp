//Square using bit manipulation

/* basic idea :: 
1. If given number is zero square = 0;
2. If a number is even :: square = 4*(square(n/2));
3. If a number is odd :: square = 4*(square(floor(n/2)))+4*(floor(n/2))+1;
*/

int square(int n){
	if(n==0){
		return 0;
	}
	if(n<0){
		n = -n;
	}
	//obtain floor of n/2 using right shift
	int x = (n>>1);
	//check odd or even
	if(n&1){//number is odd
		//4*x-> using left shift
		return((square(x)<<2)+(x<<2)+1);
	}
	else{
		return(square(x)<<2);
	}
	
}