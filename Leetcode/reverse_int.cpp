
#include <bits/stdc++.h> 

using namespace std; 


int main() 
{

	int x = -2147483647;
	int rev = 0;

	while(x != 0){
		int pop = x % 10;
		x = x / 10;

		rev = rev * 10 + pop;

		cout<<rev<<"-- "<<pop<<endl;

	}
	return 0;

} 
