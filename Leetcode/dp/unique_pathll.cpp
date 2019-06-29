#include<bits/stdc++.h>
using namespace std;

long long dp[105][105];

void init(){
	for(int i = 0;i < 101; ++i){
		for(int j = 0; j < 101; ++j){
			dp[i][j] = -1;
		}
	}
}

int go(int grid[3][4], int i, int j, int m, int n){

	if(dp[i][j] == -1){

		long long sum = 0;
		if(i == (n-1) && j == (m-1)) return 1;
		else if(grid[i][j] == 1) return 0;
		else if((i+1) > m) {sum = sum + go(grid, i, (j+1), m, n); return dp[i][j] = sum;}
		else if((j+1) > n) {sum = sum + go(grid, (i+1), j, m, n); return dp[i][j] = sum;}
		else {sum = sum + go(grid, i+1, j, m, n) + go(grid, i, j+1, m, n); return dp[i][j] = sum;}
	
	}
	else return dp[i][j];
}


int main(){

	int grid[3][4] = 
	{
		{0,0,0,1},
		{0,1,0,0},
		{0,1,0,0}
	};

	int m =  sizeof grid / sizeof grid[0]; 

  	int n = sizeof grid[0] / sizeof(int);

  	init();

	cout<<go(grid, 0, 0, m, n)<<endl;


	return 0;
}