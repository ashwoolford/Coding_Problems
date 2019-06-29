#include <bits/stdc++.h>
#include <unordered_map>
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

unordered_map<char, bool> umap;

int main(){
	IOS;
	umap['a'] = true; umap['e'] = true; umap['i'] = true; umap['o'] = true; umap['u'] = true;

	string a,b;

	cin>>a>>b;

	int len1 = a.size();
	int len2 = b.size();

	int len = min(len1, len2);

	int nv1 = 0;
	int nv2 = 0;

	if(len1 != len2) cout<<"No"<<endl;
	else {
		bool isTrue = false;

		for(int i = 0;i < len; ++i){

			if( (umap.find(a[i]) != umap.end() && umap.find(b[i]) != umap.end()) ) isTrue = true;
			else if( (umap.find(a[i]) == umap.end() && umap.find(b[i]) == umap.end()) ) isTrue = true;
			else { isTrue = false; break;}
		}

		if(isTrue) cout<<"Yes"<<endl;
		else cout<<"No"<<endl; 

	}

	return 0;
}