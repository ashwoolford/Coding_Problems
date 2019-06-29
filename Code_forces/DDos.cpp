#include<bits/stdc++.h>

using namespace std;

const unsigned int maxl = 5e3+5;
unsigned int n;
unsigned int arr[maxl];

int main(){
cin>>n;

for(int i = 0 ;i < n; ++i){
cin>>arr[i];
}

int max_len = INT_MIN;

for(int i = 0 ;i < n;++i)
{

unsigned int sum = 0;

for(int j = i ;j< n;++j)
{
sum = sum + arr[j];
int t_len = (j - i + 1);

if(sum > 100*t_len)
max_len = max(max_len,t_len);

} 
}

if(max_len == INT_MIN) cout<<0<<endl;
else cout<<max_len<<endl;


return 0;
}
