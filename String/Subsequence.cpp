//Checking subsequence
#include<bits/stdc++.h>
using namespace std;

bool isSeq(string s1,string s2,int n,int m){
	int cnt = 0;
	for(int i=0;i<n&&cnt<m;i++){
		if(s1[i]==s2[cnt]){
			cnt++;
		}
	}
	return (cnt==m);
}

int main(){
	int n,m;
	cin>>n>>m;
	string s1,s2;
	cin>>s1>>s2;
	if(m<n){
		cout<<"NO";
	}
	else{
		if(isSeq(s1,s2,n,m)){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
}
