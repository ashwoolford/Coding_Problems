#include<bits/stdc++.h>
using namespace std;

int x, y, z, t1, t2, t3;

int main(){

cin>>x>>y>>z>>t1>>t2>>t3;

int w_t = abs(x-y)*t1;

int e_t = abs(x-z)*t2 + abs(x-y)*t2 + (t3*3);

if(w_t == e_t || e_t < w_t) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
