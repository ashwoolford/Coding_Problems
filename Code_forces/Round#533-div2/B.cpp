#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define SIZE 300005

char line[SIZE];
unordered_map<char, int> umap;
stack<int> st;

int n, k;

void makeEmpty(){

	while(!st.empty()){
		st.pop();
	}
}

int main(){

	IOS;

	cin>>n>>k;

	for(int i = 0;i < n; ++i) cin>>line[i];

	st.push(line[0]);
	int flag = 0;

	if(k == 1) umap[line[0]] = 1;	

	for(int i = 1;i < n; ++i){

		if(k == 1){
			umap[line[i]] = umap[line[i]] + 1;
			continue;
		}

		if(!st.empty()){

			if(st.top() == line[i]){
				flag++;

				if(flag + 1 == k){

					umap[st.top()] = umap[st.top()] + 1;
					st.pop();
					flag = 0;
				}
			}
			else {makeEmpty(); st.push(line[i]);flag = 0;}


		}
		else {st.push(line[i]); flag = 0;}
	}

	int ans = 0;

	for(auto x : umap) ans = max(ans, x.second);
	cout<<ans<<endl;	
	return 0;
}