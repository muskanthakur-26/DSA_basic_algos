// COUNTING SET BITS

// METHOD 1 :: NAIVE APPROACH

int count(int n){
	int res = 0;
	while(n>0){
		if(n%2 !=0){//(n&1==1)
			res++;
		}
		n/=2;//(n = n>>1)
	}
	return res;
	
}

//METHOD 2 :: Brian Kerningam Algorithm

int count(int n){
	int res = 0;
	while(n>0){
		n = n&(n-1);
		res++
	}
	
	return res;
}

