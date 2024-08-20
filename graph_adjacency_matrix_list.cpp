#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl "\n"
#define ull unsigned long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define p printf

const int N=1e3;
int graph[N][N];
vector<int>graph1[N];
vector<pair<int,int>>graph2[N];

void graph_adjacency_matrix(){  //space complexity= O(N^2)
int n,m;
cin>>n>>m;
for(int i=0;i<m;++i){
    int v1,v2;
    cin>>v1>>v2;
    graph[v1][v2]=1;
    graph[v2][v1]=1;
}
}

void graph_adjacency_list(){ // s.c=O(n+m)
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int v1,v2;
    cin>>v1>>v2;
    graph1[v1].push_back(v2);
    graph1[v2].push_back(v1);
}
}

void graph_adjacency_list1(){ // s.c=O(n+m)
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
    int v1,v2,wt;
    cin>>v1>>v2>>wt;
    graph2[v1].push_back({v2,wt});
    graph2[v2].push_back({v1,wt});
}
}

int main(){
ios

graph_adjacency_matrix();
graph_adjacency_list();
graph_adjacency_list1();

}
