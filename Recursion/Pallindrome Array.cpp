// Problem: R. Palindrome Array
// Contest: Codeforces - Sheet #7 (Recursion)
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;

////////// *****Hey bhagwan rakshya karna !!***** //////////
void pall(int arr[],int n){
	int chk = 0;
	for(int i = 0;i<n/2&& n!=0;i++){
		if(arr[i] != arr[n-i-1]){
			chk = 1;
			break;
		}
	}
	if(chk){
		cout<<"NO";
	}
	else{
		cout<<"YES";
	}
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
		pall(arr,n);
    }
    return 0 ;
}  


/////////// melomane ////////////// 

