#include<bits/stdc++.h>
using namespace std;

int grid[105][105];
int m,n;
long long dp[105][105];

void init(){
	for(int i = 0;i < 101; ++i){
		for(int j = 0; j < 101; ++j){
			dp[i][j] = -1;
		}
	}
}


long long go(int i, int j){

	if(dp[i][j] == -1){

		long long sum = 0;

		if(i == n-1 && j == m-1) return 1;
		else if(grid[i+1][j] != 1) {sum = sum + go(i, j+1); return dp[i][j] = sum; }
		else if(grid[i][j+1] != 1) {sum = sum + go(i+1, j); return dp[i][j] = sum; }
		else{
			sum = sum + go(i, j+1) + go(i+1, j);
			return dp[i][j] = sum;
		}

	}
	
	else return dp[i][j];	



}

int main(){

	cin>>m>>n;

	init();

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){

			grid[i][j] = 1;
		}
	}

	// for(int i = 0 ;i < n; ++i){
	// 	for(int j = 0;j < m; ++j){
	// 		cout<<grid[i][j]<<" ";
	// 	}

	// 	cout<<endl;
	// }

	cout<<go(0,0)<<endl;




	return 0;
}