//Print all subsequence of a string (used method :: recursion)

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;

////////// *****Hey bhagwan rakshya karna !!***** //////////
void subseq(string s,string curr=" ",int i=0){
	if(i==s.size()){
		cout<<curr<<endl;
		return;
	}
	subseq(s,curr+s[i],i+1);
	subseq(s,curr,i+1);
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
		string curr =" ";
		int i = 0;
		subseq(s,curr,i);
    }
    return 0 ;
}  


/////////// melomane ////////////// 

