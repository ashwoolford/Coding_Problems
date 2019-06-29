#include <bits/stdc++.h>
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
int T, bt1, bt2, mt1, mt2;
int main()
{
	IOS;
 	clock_t tStart = clock();
 	cin>>T;
 	while(T--)
 	{
 		cin>>bt1>>bt2>>mt1>>mt2;
 		if(bt1 > bt2) swap(bt1, bt2);
 		if(mt1 > mt2) swap(mt1, mt2);
 		if(bt1 > mt1) swap(bt1, mt1);
 		if(bt2 > mt2) swap(bt2, mt2);

 		if(bt2 - mt1 == 0) cout<<"Point"<<endl;
 		else if(bt2 - mt1 < 0) cout<<"Line"<<endl;
 		else if(bt2 - mt1 > 0) cout<<"Nothing"<<endl;
 	}

	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
