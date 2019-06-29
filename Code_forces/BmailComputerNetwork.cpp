#include<bits/stdc++.h>
using namespace std;
const int size = 2e5 + 5;
int in_array[size];
int out_array[size];
int n;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>n;

for (int i=2; i<=n; ++i){

cin>>in_array[i];

}

int flag = n;
int counter = 0 ;

 
for(int  i = 1 ;i <= n;++i){
out_array[i-1] = flag;
flag = in_array[flag];
counter++;
if(flag == 0) break;
}

for(int i = counter-1;i >= 0; --i){
cout<<out_array[i]<<endl;
}
return 0;
}
