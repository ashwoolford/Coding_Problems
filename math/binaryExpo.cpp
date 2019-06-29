#include<bits/stdc++.h>

using namespace std;


int binaryExponentiation(int x, int n, int M){

if(n == 0) return 1;
if(n%2 == 0) return binaryExponentiation((x*x)%M, n/2, M);
else return (x*binaryExponentiation((x*x)%M,(n-1)/2, M))%M;

}
int main(){

int val = binaryExponentiation(3,30, 20);
cout<<val<<endl;

return 0;
}
