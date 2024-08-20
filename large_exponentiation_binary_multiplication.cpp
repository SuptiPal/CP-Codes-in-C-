#include<bits/stdc++.h>
using namespace std;
const long long int M=1e18+7; 
int binMultiply(long long a,long long b){ // a*b
    int ans=0;
    while (b>0)
    {
        if(b&1){ // b is odd
            ans=(ans+a)%M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
    
}

//ans=a*b
//a<=1e18 = 2^1024 ; M<=1e18

int binExp(long long a,long long b){ //a^b
    int ans=1; 
    while (b>0)
    {
    if(b&1){
        ans=binMultiply(ans,a); // ans=ans*a
    }
    a=binMultiply(a,a); // a=a*a
    b>>=1;
    }
    return ans;    
}
//b<=1e18
//m<=1e9+7
const int M=1e9+7;
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
 long  long a, b;
 cin>>a,b;
 cout<<binExp(a,b)<<endl;
 // 50^64^32%m
 cout<<binExp1(50,binExp1(64,32,m-1),m); // as m is prime using etf
}