#include<bits/stdc++.h>
using namespace std;

//diameter is the maximum path difference between two node among all pairs of node

const int N=1e5+10;
vector<int>g[N];
bool vis[N];
int depth[N];

void dfs(int vertex,int par=0){

  for(int child:g[vertex]){
    if(child==par) continue;
    depth[child]=depth[vertex]+1;
    dfs(child,vertex);
    height[vertex]=max(height[vertex],height[child]+1);
  }
}

//time complexity=O(vertex+edges)

int main(){

  int n,m; cin>>n>>m;
  for(int i=0;i<m;i++){
    int v1,v2; cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
  }

  dfs(1); //dfs(1,0);

  int mx_depth=-1;
  int mx_node;
  for(int i=1;i<=n;i++){
    if(mx_depth<depth[i]){
        mx_depth=depth[i];
        mx_node=i;
    }
    depth[i]=0; // resetting the value of node 1 to n 0 as we have to run dfs for mx_depth to get diameter
  }
  dfs(mx_node);
  mx_depth=-1;
  for(int i=1;i<=n;i++){
    if(mx_depth<depth[i]){
        mx_depth=depth[i];
    }
  }
  cout<<mx_depth<<endl; // diameter

}

