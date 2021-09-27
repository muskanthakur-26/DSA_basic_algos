#include<bits/stdc++.h>
using namespace std;

bool isPall(string s){
	string rev = s;
	reverse(rev.begin(),rev.end());
	return(rev==s);
}
int main(){
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	if(isPall(s)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
}
