#include<bits/stdc++.h>
using namespace std;

vector<int> vec;
long long ans = 1;

long long multiplier(){
	long long res = 1;

	if(vec[vec.size()-1] == 0) {for(int i = 0;i < vec.size()-1; ++i) res = res * vec[i];}
	else {for(int i = 0;i < vec.size(); ++i) res = res * vec[i];}

	return res;
}

long long forAll(long long n){
	long long res = 1;

	while(n != 0){
		res = res * (n%10);
		n = n / 10; 
	}

	return res;
}


int main (){

	long long n;
	cin>>n;

	int temp = n;

	while(temp != 0){
		vec.push_back(temp%10);
		temp = temp/10;
	}


	if(n < 10) cout<<n<<endl;

	else
	{
		for(int i = 1 ;i < vec.size(); ++i){

			vec[i] = vec[i]-1;
			vec[i-1] = 9;

			ans = max(ans, multiplier());
		}

		ans = max(ans, forAll(n));

		cout<<ans<<endl;
	}



	return 0;
}