//Given a binary string str of length N, the task is to find the 
//maximum count of consecutive substrings str can be divided into 
//such that all the substrings are balanced i.e. they have equal number of 0s and 1s. 
//If it is not possible to split str satisfying the conditions then print -1.


#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;

////////// *****Hey bhagwan rakshya karna !!***** //////////
int maxSubstr(string s){
	int zero = 0,one = 0,ans = 0;
	for(int i = 0;i<s.size();i++){
		if(s[i]=='0'){
			zero++;
		}
		else{
			one++;
		}
		if(zero==one){
			ans++;
		}
	}
	if(ans == 0)return -1;
	else{
		return ans;
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
		cout<<maxSubstr(s);
    }
    return 0 ;
}  


/////////// melomane ////////////// 

