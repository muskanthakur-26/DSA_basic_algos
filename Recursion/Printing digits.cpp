// Print digits of an integer separated by space
#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
 

string s;
void solve(int start)
{
	if(start==s.size()){
		return;
	}
	
	cout<<s[start]<<" ";
	solve(start+1);
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int t = 1;
    cin>>t;
    while(t--){
		cin>>s;
		solve(0);
		cout<<endl;
    }
    return 0 ;
}  