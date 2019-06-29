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
#define SIZE 100005

int* factors = new int [SIZE];
bool prime[SIZE];
int a[SIZE];

int T, k, l;
LL h;


int divn(int n) {
 int res = 1, i, c;
 for(i=2; i*i<=n; i++) {
  if(n % i == 0) {
   c = 0;
   while(n % i == 0) {
    n /= i;
    c++;
   }
   res *= (2*c+1);   
  }
 }
 if(n>1) res *= 3;
 return res;  // Note : res is the number of divisors of n*n 
              // as i told you only need to concern about perfect squares
}


int main()
{
  IOS;
  //clock_t tStart = clock();

  //factors[1] = 1;

   FOR(i, 2, SIZE) { factors[i] = divn(i); }
  //delete[] factors;

  // cin>>T;

  // while(T--)
  // {
  //   cin>>k>>l>>h;
    
  //   l = sqrt(l);
  //   h = sqrt(h);

  //   int count = 0;

  //   for(int i = l; i <= h; ++i) if(factors[i] == k) count++;
  //   cout<<count<<endl;
  // }
  

  FOR(i, 1, SIZE) cout<<i<<" --- "<<factors[i]<<endl;

  /*for(k=1, i=0; k<=20; k+=2)
  {
    cout<<k<<" -- "<<i<<endl;

  }*/


  //cout<<divisors(10000000000)<<endl;



  //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  return 0;
}

