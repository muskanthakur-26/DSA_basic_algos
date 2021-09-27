//PERMUTATIONS OF STRING

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;

////////// *****Hey bhagwan rakshya karna !!***** //////////
void permute(string s,int l,int r){
	if(l==r){
		cout<<s<<endl;
	}
	else{
		for(int i = l;i<=r;i++){
			swap(s[l],s[i]);
			permute(s,l+1,r);
			swap(s[l],s[i]);
		}
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
		string s;
		cin>>s;
		int n = s.size();
		int l = 0;
		int r = n-1;
		permute(s,l,r);
    }
    return 0 ;
}  


/////////// melomane ////////////// 

