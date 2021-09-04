// CHECK IF k-th BIT IS SET OR NOT

//METHOD 1 :: LEFT SHIFT

void kth_bit(int n,int k){
	if(n&(1<<(k-1)) != 0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}

// METHOD 2 :: RIGHT SHIFT

void kth_bit(int n,int k){
	if((n>>(k-1))&1 == 1){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}