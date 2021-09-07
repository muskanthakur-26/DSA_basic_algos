//Average of all elements present in an array

double sum(int arr[],int n){
	if(n<=0){
		return 0;
	}
	return(arr[n-1]+sum(arr,n-1));
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int t = 1;
    //cin>>t;
    while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		cout<<fixed<<setprecision(6)<<(sum(arr,n))/n;
    }
    return 0 ;
}  
 