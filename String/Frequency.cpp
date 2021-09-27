//Print all the duplicates in the input string
#include<bits/stdc++.h>
using namespace std;

void printDup(string s){
	map<char,int>cnt;
	for(int i = 0;i<s.length();i++){
		cnt[s[i]]++;
	}
	for(auto it : cnt){
		if(it.second>1)
		cout<<"Frequency of "<<it.first<<" = "<<it.second;
	}
}
int main(){
	string s;
	cin>>s;
	printDup(s);
	return 0;
}

//Time complexity : O(nlogn)  || Space complexity : O(k);; n=length of string; k = length of map
