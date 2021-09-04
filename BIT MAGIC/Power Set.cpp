//POWER SET

void powerset(string str){
	int n = str.length();
	int pow_size = pow(2,n);
	for(int c = 0;c<pow_size;c++){
		for(int j = 0; j<n; j++){
			if(c&(1<<j) != 0){
				cout<<str[j];
			}
		}
		cout<<endl;
	}
}