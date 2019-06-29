#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int frequency[12];
vector<char> vec;
vector<pair<int, int> > prio;
int n;
unordered_map<char> map;

void priority(){

	int flag = 1;
	int zero = 0;
	int temp = 0;

	for(int i = 0 ;i < 9; ++i){

		if(frequency[i] == 0) zero++;

		if(flag == 3){
			prio.push_back(make_pair(zero, temp));
			flag = 1;
			temp++;
			zero = 0;
		}
		else flag++;

	}

	sort(prio.begin(), prio.end());

	char pattern[3];
	char dummy[3];
	dummy[0] = 'R'; dummy[1] = 'G'; dummy[3] = 'B';

	for(int i = 2; i >= 0; --i){
		if(map.find())
	}



	for(int i =0 ;i < 3; ++i){
		cout<<prio[i].first<<" "<<prio[i].second<<endl;
	}


}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n;

	for(int i = 0;i < 10; ++i) frequency[i] = 0;

	int flag = 1;
	for(int i = 0;i < n; ++i){
		char color;
		cin>>color;
		vec.push_back(color);

		if(flag == 1){
			if(color == 'R') frequency[0]++;
			else if(color == 'G') frequency[1]++;
			else if(color == 'B') frequency[2]++;
			flag++;
		}
		else if(flag == 2){
			if(color == 'R') frequency[3]++;
			else if(color == 'G') frequency[4]++;
			else if(color == 'B') frequency[5]++;
			flag++;

		} 
		else if(flag == 3){
			if(color == 'R') frequency[6]++;
			else if(color == 'G') frequency[7]++;
			else if(color == 'B') frequency[8]++;

			flag = 1;
		}

		
	}



	for(int i = 0;i < 9; ++i){
		cout<<frequency[i]<<" ";
	}
	cout<<endl;

	priority();




	return 0;
}