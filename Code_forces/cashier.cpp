#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;

int n, L, a;
int t[maxn], l[maxn];

int main(){

cin>>n>>L>>a;

for(int i = 0;i <n; i++){
int a,b;
cin>>a>>b;

t[i] = a;
l[i] = a+b;

}

int result;

result = (t[0])/a;

for(int i = 1;i <n;i++){
 result = result+(t[i] - l[i-1])/a;
}

result = result + ((L-l[n-1])/a);

cout<<result<<endl;
return 0;
}
