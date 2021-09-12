//Pallindrome check using Recursion

bool pallindrome(string &str, int l, int r){
	if(l<=r)return true;
	return(str[l]==str[r] && pallindrome(str,l+1,r-1))
}