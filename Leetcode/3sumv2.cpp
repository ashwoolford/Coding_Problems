#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;


bool driver(int A[], int n, int target){

	bool isFound = false;
	unordered_set<string> uniqTriplets;
	string temp;


	sort(A, A+n); 

	for(int i = 0 ;i < n-1; ++i){

		int l = i + 1;
		int r = n - 1;

		while(l < r){
			int x = (A[i] + A[l] + A[r]);

			if(x == target) {
				
				temp = to_string(A[i]) + " : " 
                     + to_string(A[l]) + " : "
                             + to_string(A[r]); 
                if(uniqTriplets.find(temp) ==  
                                uniqTriplets.end()) 
                { 
                    uniqTriplets.insert(temp); 
                    cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<endl;
                }

				isFound = true;
				l++; 
				r--;
			}
			else if(x > target) r--;
			else l++;

		}
	}

	return isFound;

}

int main(){

	int arr[] = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
	int size = sizeof(arr)/sizeof(arr[0]);

	driver(arr, size, 0);


	return 0;
}