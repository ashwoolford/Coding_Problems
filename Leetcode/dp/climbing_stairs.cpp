#include<bits/stdc++.h>
using namespace std;

int n;
int arr[1000];
int go(int i){

	if(arr[i] == -1){
		if(i > n) return arr[i] = 0;
		if(i == n) return arr[i] = 1;
		else return arr[i] = go(i+1) + go(i+2);
	}
	else return arr[i];
}


int main(){

	cin>>n;

	for(int i = 0;i < 1000; ++i){
		arr[i] = -1;
	}

	cout<<go(0)<<endl;
	return 0;
}