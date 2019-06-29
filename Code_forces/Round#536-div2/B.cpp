#include <bits/stdc++.h>

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define PII pair<int, int>
#define SIZE 1000005

using namespace std;

typedef long long LL;

int a[SIZE];
int c[SIZE];

LL ans = 0;

priority_queue<PII, vector<PII>, greater<PII> > Q;

int main(){

	IOS;

	int n, m;

	cin>>n>>m;

	for(int i = 1;i <= n; ++i){
		int foo;
		cin>>foo;
		a[i] = foo;
	}

	for(int i = 1 ;i <= n; ++i){
		int foo;
		cin>>foo;
		c[i] = foo;
		Q.push(make_pair(c[i], i));
	}

	for(int i = 0 ;i < m; ++i){
		int x, y;
		cin>>x>>y;

		LL rem = 0;

		rem = a[x] - y;

		if(rem >= 0){
			ans += 1LL * c[x] * y;
			a[x] = rem;
		}
		else{

			ans += 1LL * c[x] * a[x];
			a[x] = 0;

			LL n_rem = 0;

			while(rem != 0 && !Q.empty()){
				//cout<<"im here"<<endl;

				int now = Q.top().second;

				n_rem = a[now] - abs(rem);

				if(n_rem >= 0){
					ans += 1LL * c[now] * abs(rem);
					a[now] = n_rem;
					rem = 0;
				}
				else{

					Q.pop();
					ans += 1LL * a[now] * c[now];
					a[now] = 0;
					rem = n_rem;
				}


			}
		}

		if(Q.empty()){
			cout<<0<<endl;
			ans = 0;
		}
		else {
			cout<<ans<<endl;
			ans = 0;

		}

	}


	return 0;
}