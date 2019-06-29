#include<bits/stdc++.h>
using namespace std;


int go(int matrix[100][100], int i, int j){

	if(matrix[i][j] == 9) return 9;
	else if(matrix[i][j+1] == 0) return matrix[i][j] + go(matrix, i+1, j);
	else if(matrix[i+1][j] == 0) return matrix[i][j] + go(matrix, i, j+1);
	else return max(matrix[i][j] + go(matrix, i + 1, j), matrix[i][j] + go(matrix, i, j + 1));

}

int main(){
	
	int matrix[100][100];

	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[1][0] = 4;
	matrix[1][1] = 5;
	matrix[1][2] = 6;
	matrix[2][0] = 7;
	matrix[2][1] = 8;
	matrix[2][2] = 9;

	cout<<go(matrix, 0, 0)<<endl;

}