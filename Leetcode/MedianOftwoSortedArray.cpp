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

double getKthM(int num1[], int s1,int e1, int num2[], int s2, int e2)
{
	int start1 = s1;
	int end1 = e1;
	int start2 = s2;
	int end2 = e2;
	int median1 = 0;
	int median2 = 0;
	int flag = 0;


	int mid1 = (start1 + end1)/2;
	int mid2 = (start2 + end2)/2;


	if((start1 + end1 + 1) % 2 == 0) {median1 = num1[mid1] + num1[mid1 + 1]; flag = 1;}
	else {median1 = num1[mid1]; flag = 0;}
	if((start2 + end2 + 1) % 2 == 0) {median2 = num2[mid2] + num2[mid2 + 1]; flag = 1;}
	else {median2 = num2[mid2]; flag = 0;}

	if(abs(start1 - end1) == 0){return (float)(num2[start2] + num1[start1])/2;}


	if(median1 < median2)
	{
		if(flag == 0) {start1 = mid1; end2 = mid2;}
		else {start1 = mid1 + 1; end2 = mid2;}			
	}
	else 
	{
		if(flag == 0){end1 = mid1; start2 = mid2;}
		else {end1 = mid1; start2 = mid2 + 1;}
	}

	return getKthM(num1, start1, end1, num2, start2, end2);

}

int main()
{
	IOS;

	int num1[] = {1, 3};
	int num2[] = {2, 4};

	int size1 = sizeof(num1)/sizeof(num1[0]);
	int size2 = sizeof(num2)/sizeof(num2[0]);

	cout<<getKthM(num1, 0, size1 - 1, num2, 0, size2 - 1)<<endl;

	return 0;
}
