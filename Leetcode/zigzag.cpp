#include<bits/stdc++.h>
using namespace std;


char arr[100][100];

const int n = 10;
const int col = 3;


void showingTable()
{
	for(int i = 0 ;i < n; ++i)
	{
		for(int j = 0 ; j < col; ++j)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}

void finalRes()
{
	for(int i = 0 ;i < n; ++i)
	{

		for(int j = 0 ; j < col ; ++j)
		{
			if( arr[i][j] != 0) cout<<arr[i][j];
		}

	}
}

int main()
{

	int col = 3;
	int flag = col - 1;
	int counter = 0;
	string s = "ABCDEFGH";



	for(int i = 0 ;i < n; ++i)
	{

		for(int j = 0 ;i < col; ++j)
		{

			if(flag == 0) flag = col - 1;

			if( flag <= col - 1 && flag >= 0 )
			{

				arr[i][flag] = s[counter];
				flag --;
			}
			else
			{
				arr[i][j] = s[counter]; 

			}

			counter++;	
		}

		counter++;

	}

	showingTable();
	finalRes();

	return 0;
}
