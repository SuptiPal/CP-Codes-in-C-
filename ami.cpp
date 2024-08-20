#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl endl
#define io #ifndef ONLINE_JUDGE  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); #endif
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    IOS
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif
    int a;
    cin>>a;
    printBinary(a);
cout<<a^(1<<1);
}
