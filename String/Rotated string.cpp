//A Program to check if strings are rotations of each other or not

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;
bool rot(string &s1, string &s2){
	if(s1.length()!=s2.length()){
		return false;
	}
	else{
		string s = s1+s1;
		if(s.find(s2)){
			return true;
		}
	}
}

signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    if(rot(s1,s2)){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
    return 0 ;
}  
