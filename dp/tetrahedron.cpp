#include<bits/stdc++.h>
using namespace std;


#define N 1000

int dp[4][4][N];
int vis[4][4][N];

int go(int src, int des, int steps){
	if(steps == 0){
		if(src == des) return 1;
		return 0;
	}

	int &ans = dp[src][des][steps];

	if(vis[src][des][steps])
		return ans;
	vis[src][des][steps] = 1;
	ans = 0;

	for(int i = 0;i <= 3; ++i){
		if(i == src) continue;
		ans += go(i, des, steps-1);

	}
	return ans;
}

int main(){

	int i,n,k,j;
	cin>>n;
	cout<<go(3,3,n)<<endl;


}