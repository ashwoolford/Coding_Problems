#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int t;
long long n;

int main()
{

  cin>>t;

  while(t--)
  {
    cin>>n;
    n = ((n*n)/2)-1;
    if(n == -1) cout<<1<<endl;
    else cout<<n<<endl;

  }




  return 0;
} 
