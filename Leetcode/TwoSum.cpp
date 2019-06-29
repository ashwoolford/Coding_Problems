#include <bits/stdc++.h>

using namespace std;

int arr[100005];
vector<int> rst;


int main()
{
	vector<int> vec;
	vec.push_back(3);
	vec.push_back(3);
	//vec.push_back(3);
	vec.push_back(3);

	int size = vec.size();
	int target = 6;

	arr[0] = 1;
	for(int i = 1 ;i < size; ++i) arr[i] = 0;

	for(int i = 0 ;i < size; ++i)
	{
		int x = target - vec[i];

		for(int j = i+1 ;j < size; ++j)
		{
			if(vec[j] == x && arr[j] == 0){
				rst.push_back(i);
				rst.push_back(j);
				arr[j] = 1;
				break;
			}

		}

	}

	for(int i = 0 ;i < rst.size(); ++i) cout<<rst[i]<<" ";	



	return 0;
}
