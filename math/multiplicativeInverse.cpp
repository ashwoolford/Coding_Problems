#include<bits/stdc++.h>
using namespace std;


long long d, x, y;
long long A,B,C,M;

void extendedEuclid(long long A, long long B){

if(B == 0){

d = A;
x = 1;
y = 0;

}

else {

extendedEuclid(B, A%B);
long long temp = x;
x = y;
y = temp - (A/B) * y;

}

}


long long modInverse(long long A, long long M)
{
//A = A%M;

extendedEuclid(A, M);
return (x%M+M)%M;

}

long long modularExponentiation(long long x,long long n,long long M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}



int main(){

cin>>A>>B>>C>>M;

long long res = (modularExponentiation(A, B, M)%M * modInverse(C, M)%M)%M;
cout<<res<<endl;
return 0;
}
