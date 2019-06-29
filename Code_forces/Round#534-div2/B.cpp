#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
using namespace std;

string line;
stack<char> s;

int flag = 0;

int main(){
	IOS;
	cin>>line;
	int len = line.size();

	s.push(line[0]);

	for(int i = 1;i < len; ++i){
		
		if(!s.empty() && s.top() == line[i]) {
			 s.pop();
			flag++;
		}
		else{
			s.push(line[i]);
		}
	}

	if(flag == 0) cout<<"No"<<endl;
	else if(flag % 2 == 0) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;


	return 0;
}