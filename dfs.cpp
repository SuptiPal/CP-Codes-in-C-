#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
bool vis[N];


void dfs(int vertex){
  cout<<vertex<<endl;
  vis[vertex]=true;  // visited array
  /* Take action on vertex after entering
  *  the vertex
  */
  for(int child:g[vertex]){
    cout<<"parent: "<<vertex<<", child: "<< child<<endl;
    /*Take action on child before entering
    * the child node
    */
    if(vis[child]) continue;
    dfs(child);
    /*Take action on child after exiting
    * the child node
    */
  }
  /*Take action on vertex before exiting
  * the vertex
  */
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
