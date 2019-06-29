#include<bits/stdc++.h>
using namespace std;

vector<string> v;


string intToRoman(int n){

	string str;

	while(n != 0){

		if(n >= 1 && n <= 4){
			if(n == 4) {n = n - 4; str = str + "IV";}
			else { n = n -1; str = str + "I"; }
		}
		else if(n >= 5 && n <= 9){

			if(n == 9){n = n - 9; str = str + "IX";}
			else{ n = n - 5; str = str + "V";}

		}

		else if(n >= 10 && n <= 49){
			if(n >= 40 && n<= 49){n = n - 40; str = str + "XL";}
			else { n = n - 10; str = str + "X"; }
		}
		else if(n >= 50 && n <= 99){
			if(n >=90 && n <= 99){n = n - 90; str = str + "XC";}
			else { n = n - 50; str = str + "L"; }
		}

		else if(n >= 100 && n <= 499){
			if(n >= 400 && n <= 499){n = n - 400; str = str + "CD";}
			else { n = n - 100; str = str + "C"; }

		}

		else if(n >= 500 && n <= 999){
			if(n >= 900 && n <= 999){n = n - 900; str = str + "CM";}
			else { n = n - 500; str = str + "D"; }
		}
		else if(n >= 1000 && n<= 4999){
			n = n - 1000; str = str + "M";
		}

	}

	return str;

}

int main(){

	//cout<<intToRoman(4)<<endl;

	while(1){
		int x;
		cin>>x;
		cout<<intToRoman(x)<<endl;

	}
	return 0;
}