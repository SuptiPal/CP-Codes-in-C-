#include<bits/stdc++.h>
using namespace std;

// lca = lowest common ancestor in a tree

const int N=1e5+10;
vector<int>g[N];
int par[N]; //par[1] = -1, par[2] = 1, par[3] = 1, par[4] = 3, par[5] = 2, par[6] = 5, par[7] = 5, par[8] = 5, par[9] = 4, par[10] = 4, par[11] = 10, par[12] = 8, par[13] = 1,

void dfs(int v,int p=-1){
    par[v]=p;
    for(int child: g[v]){
        if(child==p) continue;
        dfs(child,v);
    }
}

vector<int>path(int v){
    vector<int>ans;
    while(v!=-1){
        ans.push_back(v);
        v=par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
// TC=O(n)

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);

    int x,y; cin>>x>>y;

    vector<int>path_x=path(x);
    vector<int>path_y=path(y);
    int mn_ln=min(path_x.size(),path_y.size());

    int lca=-1;
    for(int i=0;i<mn_ln;i++){
        if(path_x[i]==path_y[i]){
            lca=path_x[i];
        }else{
            break;
        }
    }
    cout<< lca<<endl;

    for(int i=1;i<14;i++) printf("par[%d] = %d, ",i,par[i]);
    return 0;
}

//13
//1 2
//1 3
//1 13
//2 5
//5 6
//5 7
//5 8
//8 12
//3 4
//4 9
//4 10
//10 11
//5 12
