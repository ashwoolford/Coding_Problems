#include<bits/stdc++.h>
using namespace std;
 
bool isTrue[1005][1005];
//int res[1000];
 
 
string longestPalindrome(string A)
{
	int size = A.length();
	int lo = 0;
	int maxlen = 0;

	//for single char 

	for(int i = 0; i < size; ++i)
		isTrue[i][i] = true;

	//for two chars

	for(int i = 0 ;i < size; ++i)
	{
		if(A[i] == A[i + 1]) 
		{
			isTrue[i][i+1] = true;
			maxlen = 1;
			lo = i;
		}
	}

	//for more than two chars


	for(int i = 2 ;i < size; ++ i)
	{
		int k = 0;
		for(int j = i ;j < size; ++j)
		{
			if(A[k] == A[k + i])
			{
				if(isTrue[k + 1][(k + i) - 1])
				{
					isTrue[k][k + i] = true;
					maxlen = i; lo = k;

				}
			}

			k++;
		}
	}


	return A.substr(lo, maxlen+1);
}


int main()
{
	string A = "abbaytttttty";
	int len = A.length();
	cout<<longestPalindrome(A)<<endl;
	//cout<<longestPalindrome(A, 0, T-1)<<endl;
	return 0;
} 