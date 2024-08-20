#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl endl

double eps=1e-6;

double multiply(double mid,int x){
    double ans=1;
    for(int i=0;i<x;++i){
        ans*=mid;
    }
    return ans;
}

int main(){
    IOS

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout); 
    // #endif

    double n;
    int x;
    cin>>n>>x;
    double lo=1,hi=n,mid;
    while (hi-lo>eps)
    {
       mid=(lo+hi)/2;
       if(multiply(mid,x)<n){
        lo=mid;
       }
       else{
        hi=mid;
       }
    }
// time complexity = x*log(n*10^d) ;d= . er por joto gulo ghar porjonto precision dorkar for xth root only
    cout<<lo<<nl;
    cout<<hi<<nl;

}
