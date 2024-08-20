#include<bits/stdc++.h>
using namespace std;
const int M=1e6+10;
int binExp1(int a,long long b,int m){ //large exponentiation
    int ans=1;
    while (b>0)
    {
    if(b&1){
        ans=(ans*1LL*a); // ans=ans*a
    }
    a=(a*1LL*a)%m; // a=a*a
    b>>=1;
    }
    return ans;    
}
int main(){
   int a;
   cin>>a;
   cout<<binExp1(a,M-2,M);  // b^-1 %M = b^(M-2)%M
}