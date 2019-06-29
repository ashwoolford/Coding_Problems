#include<bits/stdc++.h>
using namespace std;

int main()
{

vector<int> vec[10002];

vec[2].push_back(3);
vec[3].push_back(2);
vec[2].push_back(6);
vec[2].push_back(12);

for(int n: vec[2]){
cout<<n<<endl;
}

return 0;
}


