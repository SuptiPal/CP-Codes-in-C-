#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl endl

void lower_bound(){
    int n,data;
    cin>>n>>data;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a+0,a+n); 
    int l=0,r=n-1,mid;
    while (r-l>1)
    {
      mid=(l+r)/2;
      if(data>a[mid]){
        l=mid+1;
      }
      else{
        r=mid;
      }
    }
    if(a[l]>=data){
        cout<<l<<endl;
    }
    if(a[r]>=data){
        cout<<r<<endl;
    }
}

void binary_search2(){
    int n,data;
    cin>>n>>data;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a+0,a+n); 
    int l=0,r=n-1,mid;
    while (r-l>1) 
    {
      mid=(l+r)/2;
      if(data==a[mid]){
        cout<<mid<<nl;
        return;
      }
      else if(data>a[mid]){
        l=mid+1;
      }
      else{  // data<a[mid]
        r=mid-1;
      }
    }
}

void binary_search1(){
    int n,data;
    cin>>n>>data;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a+0,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<nl;
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(data==a[mid]){
            cout<<mid<<nl;
            return;
        }
        else if(data>a[mid]){
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }

}

int main(){
    IOS
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while (t--)
    {
        binary_search1();
        binary_search2();
        lower_bound();
    }
    
}
