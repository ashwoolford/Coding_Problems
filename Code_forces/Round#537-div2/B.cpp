#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
#define MOD 1000000007LL
#define F first
#define S second
#define U unsigned
#define LL long long
#define ULL unsigned long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
void swapi(int *a,int *b){int temp;temp=*a;*a=*b;*b=temp;}
ULL gcd(ULL a,ULL b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}
#define SIZE 1000005

int main(){
	IOS;

	int n, k, m;
	vector<double> vect;
	unordered_set<double> uset;

	cin>>n>>k>>m;


	for(int i = 0;i < n; ++i){
		double a;
		cin>>a;
		vect.push_back(a);
		uset.insert(a);
	}

	sort(vect.begin(), vect.end());

	if(m > (n-1)){

		int val = vect[n-1];
		int limit = (m - n) + 1;

		if(limit <= k) val = val+limit;
		else val = val + k;

		cout<<val<<endl;
	}
	else{

		if(uset.size() <= 2){

			long double ans = m;

			for(int i = 0; i < n; ++i){
				ans += vect[i];
			}

			cout<<setprecision(15)<<(long double )ans/(long double)n<<endl;

		}

		else{

			long double ans = 0;

			for(int i = m; i < n; ++i){
				ans += vect[i];
			}

			cout<<setprecision(15)<<(long double )ans/(long double)(n - m)<<endl;

		}

	}

	return 0;
}