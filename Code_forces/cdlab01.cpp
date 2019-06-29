#include <bits/stdc++.h>
using namespace std;

//string s = " dsaf dasf \n hhhh kd";
string s;

int main(){
	

	cin>>s;

	int len = s.length();

	int space = 0;
	int line = 0;

	cout<<len<<endl;

	for(int i = 0 ;i < len; ++i){

		if(s[i] == ' ') space++;
		else if(s[i] == '\n') line++;
	}

	cout<<space<<" "<<line<<endl;
}