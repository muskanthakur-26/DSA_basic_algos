#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;

int suffSum(int arr[],int n,int m){
	if(n<m){
		return 0;
	}
	return arr[n-1]+suffSum(arr,n-1,m);
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int t = 1;
    //cin>>t;
    while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		m = n-m+1;
		cout<<suffSum(arr,n,m);
    }
    return 0 ;
}  

