#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


bool driver(int A[], int n){

	bool isFound = false;

	for(int i = 0;i < n - 1; ++i){

		unordered_set<int> s; 

		for(int j = i + 1; j < n; ++j){

			int x = -(A[i] + A[j]);

			if(s.find(x) != s.end()){
				isFound = true;

				cout<<x<<" "<<A[i]<<" "<<A[j]<<endl;

			}
			else s.insert(A[j]);

		}
	}

	return isFound;

}

int main(){

	int arr[] = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    driver(arr, n); 

	return 0;
}