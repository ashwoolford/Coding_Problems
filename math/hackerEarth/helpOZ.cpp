#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <unordered_map>
#include <map>
using namespace std;
#define MOD 1000000007LL
#define LL long long
#define ULL unsigned long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
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

int M;
int arr[SIZE];
unordered_map<int, int> ump;

void factorize(int n)
{
  int sqt = sqrt(n);
  
  for(int i = 1; i <= sqrt(n); ++i)
  {
    if(n%i == 0)
    {
     // cout<<i<<" "<<n/i<<endl;
      if(ump.count(i) != 0) ump[i] = ump[i] + 1;
      else ump[i] = 1;

      if(i != (n/i))
      {
       if(ump.count(n/i) != 0) ump[n/i] = ump[n/i] + 1;
       else ump[n/i] = 1;
      }
    }
  
  }

  //cout<<"----------"<<endl;


}

int main()
{
  si(M);
  REP(i, M)
  {
    si(arr[i]);
  }

  REP(i, M-1)
  {
    int dist = abs(arr[i] - arr[i+1]);
    factorize(dist);
  }




  map<int, int> ordered(ump.begin(), ump.end());

  for(auto x: ordered)
  {
   if(x.second == (M-1) && x.first != 1) printf("%d ", x.first);
  }


  return 0;
}

