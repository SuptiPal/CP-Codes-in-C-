#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
int subtree_sum[N],even_ct[N];

void dfs(int vertex,int par=0){

  if(vertex%2==0) even_ct[vertex]++;
  subtree_sum[vertex]+=vertex;

  for(int child:g[vertex]){

    if(child==par) continue;
    dfs(child,vertex);
    subtree_sum[vertex]+= subtree_sum[child];
    even_ct[vertex] += even_ct[child];
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
  dfs(1);
  for(int i=1;i<=n;i++){
    cout<<i<<' '<<subtree_sum[i]<<' '<<even_ct[i]<<endl;
  }
  int q; cin>>q;
  while(q--){
    int node; cin>>node;
    cout<<subtree_sum[node]<<' '<<even_ct[node]<<endl;
  }
  //for(int i=1;i<=9;i++) { cout<<"g["<<i<<endl;for(auto &c:g[i]) {cout<<c<<' ';}cout<<endl; }
}

/*
9 9
1 2
2 3
3 4
1 3
2 4
4 5
5 9
5 8
3 8
*/
