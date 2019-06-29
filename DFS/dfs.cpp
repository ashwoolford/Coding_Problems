#include<bits/stdc++.h>
using namespace std;

vector<int> nodeNeighbour[100002];
bool isVisited[100002];

int main(){
 
int nodes;
cin >> nodes;
int edges;
cin>>edges;

for(int i = 0 ;i < nodes;i++){

isVisited[i+1] = false;

}

for(int i = 0;i<edges;i++){
int u, v;
cin>>u>>v;
nodeNeighbour[u].push_back(v);
nodeNeighbour[v].push_back(u);
}



 return 0;
}
