#include<bits/stdc++.h>
using namespace std;
long long dp[105][105];

int go(int matrix[4][4], int i, int j, int m, int n){

	if(dp[i][j] == -1){
		if(i == (m-1) && j == (n-1)) return dp[i][j] = matrix[i][j];
		else if((i+1) > m-1) {
			return matrix[i][j] + go(matrix, i, j+1, m, n);
		}
		else if((j+1) > n-1){
			return matrix[i][j] + go(matrix, i+1, j, m, n);
		}
		else {
			return dp[i][j] = matrix[i][j] + min(go(matrix, i, j+1, m, n), go(matrix, i+1, j, m, n));
		}
	}
	else return dp[i][j];

}

int main(){

	int matrix[4][4] = {{1,2,1,1}, {1,3,1,3},{2,2,1,4}, {4,2,1,8}};

	for(int i = 0;i < 105; ++i){
		for(int j = 0; j < 105; ++j){
			dp[i][j] = -1;
		}
	}

	int m =  sizeof matrix / sizeof matrix[0]; 
  	int n = sizeof matrix[0] / sizeof(int);

  	cout<<m<<" "<<n<<endl;

	cout<<go(matrix, 0, 0, m, n)<<endl;
	return 0;
}