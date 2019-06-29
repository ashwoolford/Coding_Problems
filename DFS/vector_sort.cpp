#include<bits/stdc++.h>
using namespace std;

int main(){

vector< pair<int,int> > vect;

vect.push_back(make_pair(2,5));
vect.push_back(make_pair(2,6));
vect.push_back(make_pair(1,3));
vect.push_back(make_pair(1,4));

sort(vect.begin(), vect.end());

int n = vect.size();

cout<<vect[0].second<<endl;

return 0;
}
