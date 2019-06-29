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

int val[SIZE];
LL po[SIZE];
int T, X, Pi;
LL Ai;


LL power(int a, LL N, int M) 
{
        if (N == 0) {
            return 1;
        } else {
            LL R = power(a, N / 2, M);
            if (N % 2 == 0) {
                return (R * R) % M;
            } else {
                return (R * R * a) % M;
            }
        }
}

int main()
{
  IOS;
  int factors[]={2,5};
  int exponents[]={2,2};
  vector <int> ans;



  int factors_count = 1;
for (int i = 0; i < r; ++i)
{
    factors_count *= 1+exponents[i];
}
ans.resize(factors_count);
ans[0] = 1;
int count = 1;
for (int stack_level = 0; stack_level < r; ++stack_level)
{
    const int count_so_far = count;
    const int prime = factors[stack_level];
    const int exponent = exponents[stack_level];
    int multiplier = 1;
    for (int j = 0; j < exponent; ++j)
    {
        multiplier *= prime;
        for (int i = 0; i < count_so_far; ++i)
        {
            ans[count++] = ans[i] * multiplier;
        }
    }
}

cout<<ans[1]<<endl;


  return 0;
}  
