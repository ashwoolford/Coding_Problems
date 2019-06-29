#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653

double n, r;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>r;

    double angle = cos(PI/n);

    double s = r*sqrt(2)*sqrt(1.0-angle);

    cout<<setprecision(8)<<s<<endl;


}