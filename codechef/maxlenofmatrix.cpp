#include<bits/stdc++.h>
using namespace std;


int go(int matrix[][], int i, int j){

	int len;

	if(matrix[i][j] == 9) return 9;
	else if(matrix[i+1][j] == 0) len = matrix[i][j] + go(matrix, i, j+1);
	else if(matrix[i][j+1] == 0) len = matrix[i][j] + go(matrix, i+1, j);
	else len = max(matrix[i][j] + go(matrix, i + 1, j), matrix[i][j] + go(matrix, i, j + 1));

	return len;
}

int main(){

	int matrix[3][3];

	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 3;
	matrix[1][0] = 4;
	matrix[1][1] = 5;
	matrix[1][2] = 6;
	matrix[2][0] = 7;
	matrix[2][1] = 8;
	matrix[2][2] = 9;

	cout<<go(matrix, 0, 0);

}