//Rope Cutting 

int maxpieces(int n,int a,int b,int c){
	if(n==0)return 0;
	if(n<0)return -1;
	int x = maxpieces(n-a,a,b,c);
	int y = maxpieces(n-b,a,b,c);
	int z = maxpieces(n-c,a,b,c);
	
	int res = max(x,y,z);
	if(res == -1){
		return -1;
	}
	return res+1;
}
