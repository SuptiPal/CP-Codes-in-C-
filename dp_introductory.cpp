#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long dp[N];

//fibonacci series
//top down approach
long long func(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=func(n-1)+func(n-2);
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n; cin>>n;
    cout<<func(n)<<"\n";
    //bottom up approach
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
}
