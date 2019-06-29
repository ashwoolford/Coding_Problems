#include<bits/stdc++.h>
using namespace std;

const int unsigned max_l = 1e3;
int arr[max_l];
int n, a, res;


int main(){

cin>>n;

for(int i = 0 ;i < n;++i){
cin>>arr[i];
}

cout<<"----results-----"<<endl;
for(int i = 0; i< n; ++i){
int res = 0;

for(int j = 0 ;j < arr[i]+100;++j){
int eq_s = arr[i] - (arr[i]^j)- j;

if(eq_s == 0) res++; 
}
cout<<res<<endl;

}

return 0;
}
