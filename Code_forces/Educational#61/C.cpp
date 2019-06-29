#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<cmath>
#include<vector>
#include<cstring>
#include<string>
#include<iostream>
#include<iomanip>
#define mset(a,b)   memset(a,b,sizeof(a))
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
//const ll mod=1e9+7;
const int N=1000000;
const int inf=0x3f3f3f3f;
priority_queue<int,vector<int>,greater<int> >q;
 
int L[5005],dp[5005];
int main()
{
    int n,q;
    while(~scanf("%d%d",&n,&q))
    {

        for(int i=1;i<=n;i++)
        {
            L[i]=i+1;
            dp[i]=0;
        }
        for(int i=1;i<=q;i++)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            for(int j=l;j<=r;j++)
            {
                L[j]=min(L[j],l);
                // L[]Set to i+1 to indicate the status that has not been drawn
            }
        }
        for(int k=1;k<=q-2;k++)
        {
            for(int i=n;i>=1;i--)
            {
                dp[i]=max(dp[L[i]-1]+i-L[i]+1,dp[i]);
                // L[i]A section of ~i has been drawn with a length of i-L[i]+1
                // So dp[L[i]-1] plus L[i] to i is drawn. Update dp[i]
            }
            for(int i=1;i<=n;i++)
            {
                dp[i]=max(dp[i],dp[i-1]);
                // There are better solutions for short segments. Naturally, long segments can be updated.
            }
        }
        printf("%d\n",dp[n]);
    }
 
    return 0;
}