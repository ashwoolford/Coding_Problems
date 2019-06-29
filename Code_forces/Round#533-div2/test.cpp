#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long int LL;
typedef unsigned long long ULL;
typedef unsigned int uint;
 
const int mod = 1e9 + 7;
const LL INF = 9e18 + 2e17;
const int inf = 2e9;
const int N = 1e3 + 22;
const double eps = 1e-10;
const double PI = 3.14159265 ;
int nn, L, R;
map< LL, LL> m[3];
int c[3];

int cal(int n, int r) {
    if(r == 0) return n / 3;
    if(r == 1) return (n + 2) / 3;
    return (n + 1) / 3;
}
int fun(int n, int r) {

    if(n == 1) {
        int res = cal(R, r) - cal(L - 1, r);
        return res;
    }

    LL sum = 0;
    sum = (1LL * fun(n / 2, 0) * fun(n - n / 2, r)) % mod;
    
    sum += (1LL * fun(n / 2, 1) * fun(n - n / 2, (3 + r - 1) % 3)) % mod;
   
    sum += (1LL * fun(n / 2, 2) * fun(n - n / 2, (3 + r - 2) % 3)) % mod;
   
    return sum;
}
void _solve() {
    cin >> nn >> L >> R;
    cout << fun(nn, 0)<<endl;
}
int main() {
	fastio;
	//t_times
	_solve();
	return 0;
}