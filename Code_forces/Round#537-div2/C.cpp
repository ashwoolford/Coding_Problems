#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define size 100005;
typedef long long LL;

vector<int> vec;

int n, k, A, B;


LL go(LL l, LL r){

	LL i = lower_bound(vec.begin(), vec.end(), l) - vec.begin();
	LL j = upper_bound(vec.begin(), vec.end(), r) - vec.begin();

	LL x = j - i;

	LL consumed_power;


	if(x == 0) 
		consumed_power = A;
	else consumed_power = B*(r - l + 1)*x;

	if(x == 0 || l == r) return consumed_power;
	else {

		LL mid = (l+r)/2;

		return min(consumed_power, go(l, mid) + go(mid+1, r)); 

	}

}

int main(){

	IOS;

	cin>>n>>k>>A>>B;

	for(int i = 0;i < k; ++i){

		LL x; 
		cin>>x;
		vec.push_back(x);
	}

	sort(vec.begin(), vec.end());
	cout<<go(1, (LL)1<<n)<<endl;



	return 0;
}