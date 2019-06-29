#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string st;
unordered_map<char, int> my_map;

int main()
{

     cin>>st;
    int n = st.length();
    int ans = 0;

    for(int j = 0, i = 0; j < n; j++)
    {
    	if(my_map.find(st[j]) != my_map.end())
    	{
    		i = my_map[st[j]];
    	}
    	ans = max(ans, j - i + 1);
    	my_map[st[j]] = j + 1;
    }

    cout<<ans<<endl;    

	return 0;
}