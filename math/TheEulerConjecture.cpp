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
#define SIZE 1000006

int t,n;
int primes[SIZE];

void primeGenerator(int n)
{
  for(int i = 2 ;i <= n; ++i)
    primes[i] = i;

  for(int i = 2; i <= n; ++i)
      {
	if(primes[i] != 0 )
	{
	  for(int j = 2 ; i*j <= n; ++j)
	    primes[i*j] = 0;
	}
      
      }
}

void preProcessing()
{

  int present = 2;
  int past = 0;

  for(int i =3; i <= SIZE ; ++i)
  {

    if(primes[i] == i)
    {
      past = present;
      present = primes[i]; 
    }

    else
    {
      if( primes[i-1] == (i-1) ) primes[i] = past;
      else primes[i] = present;

    }

  }
}



int main()
{
  IOS;

  primeGenerator(SIZE);
 // preProcessing();

  cin>>t;

  while(t--)
  {
    cin>>n;

    int b = 0;
    int a = 0;

    int sq = sqrt(SIZE);

    for(int i =2 ;i <= sq; ++i)
    {
      if(primes[i] != 0)
      {

	int y = primes[i];
	int x = n - y;

	if( x >=2  && primes[x] != 0)
	{
	  b = primes[i];
	  a = n - b;
	  break;
	
	}

      }


    }

    if( a%2 == 0 && b%2 == 0 ) cout<<"No"<<endl;
    else cout<<n<<" = "<<b<<" + "<<a<<endl;
  }


  return 0;
}

