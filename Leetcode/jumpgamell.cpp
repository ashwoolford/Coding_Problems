#include<bits/stdc++.h>

using namespace std;



int minimumJump(int nums[], int n){

	vector<int> f(n, INT_MAX-1);
	f[n-1] = 0;

	for(int i = n - 2; i >= 0; --i){

		for(int j = i + 1; j <= i + nums[i] && j < n; ++j){

			cout<<i<<") "<<f[i]<<" "<<j<<") "<<1+f[j]<<" --- ";
			f[i] = min(f[i], 1 + f[j]);
		}

		cout<<endl;
	}

	return f[0];

}

int main(){

	int arr[] = {2, 3, 1, 1, 4};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<minimumJump(arr, n)<<endl;

	return 0;
}