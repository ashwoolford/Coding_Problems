#include<bits/stdc++.h>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
unsigned long long n;
long long a, b;

int main(){
SPEED;
cin>>n;

float flag = (float)n/2;

if(n%2 == 0){ a = flag, b = flag;}
else {
a = ceil(flag);
b = flag;
}

int f_res = 0;

for(int i = 0 ;i < n/20; ++i){

string str = to_string(a++) + to_string(b--);
int res = 0;
for(int j = 0; j < str.length(); ++j){
int dig = (str[j] - '0');
res = res + dig;
}
//cout<<res<<endl;
f_res = max(f_res, res);

}
cout<<f_res<<endl;

return 0;
}
