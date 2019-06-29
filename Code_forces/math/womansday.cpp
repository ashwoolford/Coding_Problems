#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int n, k;
int arr[100];


int main (){
	std::ios_base::sync_with_stdio(false);

	cin>>n>>k;

	for(int i = 0;i < n; ++i){
		ll v;
		cin>>v;
		++arr[v%k];
	}

	int res = 0;

	res = arr[0]/2;

	if((k%2) == 0) res = res + arr[k/2]/2;

	for(int i = 1;i < (k+1)/2; ++i){
		res = res + min(arr[i], arr[k-i]);
	}

	cout<<res*2<<endl;

	return 0;
}