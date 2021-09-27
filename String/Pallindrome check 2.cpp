#include<bits/stdc++.h>
using namespace std;

bool isPall(string s){
	int start = 0;
	int end = s.size()-1;
	while(start<end){
		if(s[start]!=s[end]){
			return false;
		}
		start++;end--;
	}
	return true;
}

int main(){
	string s;
	cin>>s;
	if(isPall(s)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
