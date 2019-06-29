#include <bits/stdc++.h>
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
#define SIZE 1000001


int main (){
	IOS;

	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;

		unordered_set<char> charSet; 
		int ans = INT_MAX;


		for(int i = 0 ;i < N; ++i){

			string s;
			cin>>s;

			if(i == 0){
				for(int i = 0;i < s.size(); ++i) charSet.insert(s[i]);
				if(N == 1) {
					int ans = 0;
					for ( auto it = charSet.begin(); it != charSet.end(); ++it) ans++;
					cout<<ans<<endl;
					break;	
				}	
			}
			else {
				int temp = 0;
				for(int i = 0;i < s.size(); ++i){
					if(charSet.find(s[i]) != charSet.end()) temp++;
				}

				ans = min(ans, temp);

			}

		}

		if(ans != INT_MAX) cout<<ans<<endl;

	}

	return 0;
}

