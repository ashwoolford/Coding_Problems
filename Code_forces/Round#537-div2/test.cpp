#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<int> vec;

	vec.push_back(1);
	vec.push_back(3);

	int i = lower_bound(vec.begin(), vec.end(), 1)  - vec.begin();
	int j = upper_bound(vec.begin(), vec.end(), 4) - vec.begin();

	cout<<i<<" "<<j<<endl;

	return 0;
}