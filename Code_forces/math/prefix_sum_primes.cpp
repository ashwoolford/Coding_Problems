#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	int total_1 = 0;
	int total_2 = 0;

	cin>>n;

	while(n--){
		int value;
		cin>>value;

		if(value == 1) total_1 = total_1 + 1;
		else total_2 = total_2 + 1;
	}

	if(total_1 != 0 && total_2 != 0){

		cout<<2<<" ";
		total_2 = total_2 - 1;

		cout<<1<<" ";
		total_1 = total_1 - 1;


		while(total_1 != 0 || total_2 != 0){

			if(total_2 != 0) {cout<<2<<" "; total_2 = total_2 - 1;}
			else {cout<<1<<" "; total_1 = total_1 - 1;}
		}

	}

	else if(total_1 == 0){

		while(total_2--) cout<<2<<" ";
	}
	else if(total_2 == 0){
		while(total_1--) cout<<1<<" ";
	}

	cout<<endl;



}