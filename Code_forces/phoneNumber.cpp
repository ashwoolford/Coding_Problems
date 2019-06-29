#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;

int n;
vector<int> vect;
string str;

int main(){

cin>>n>>str;

for(int i = 0 ;i < n; ++i){
vect.push_back( (int)(str[i] - '0') );
}

sort(vect.begin(), vect.end(), greater<int>());
int flag = n/11;
int counter = 0;
for(int i = 0 ;i < n; ++i){
if(vect[i] == 8) counter++;
if(vect[i] < 8) break; 

}

if(counter >= flag) cout<<flag<<endl;
else if(counter != 0 && counter < flag) cout<<counter<<endl;
else if(counter == 0) cout<<0<<endl; 

return 0;
}
