#include<bits/stdc++.h>
using namespace std;

int main(){


	int n, k;
	cin >> n >> k;
	vector<int> cnt(k);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		//++cnt[x % k];
		cnt[x%k] = cnt[x%k] + 1;
	}

	for(int i = 0; i < n; ++i){
		cout<<cnt[i]<<" ";
	}
	cout<<endl;
}