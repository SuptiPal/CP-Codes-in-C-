#include<bits/stdc++.h>
using namespace std;

//a^b%m

int binExpRecur(int a,int b){
    if(b==0) return 1;
    int res=binExpRecur(a,b/2);
    if(b&1) // b is odd 
    {
      return a*res*res;
    }
    else{
      return res*res;
    }  
} // TC = O(log(b))

int binExpIter(int a,int b){
  int ans=1;
  while(b){
    if(b&1){ // b is odd
      ans=ans*a;
    }
    a=a*a;
    b>>=1;
  }
  return ans;
} // TC= O(log(b))

int main(){
    int a,b;
    cin>>a>>b;
    cout<<binExpRecur(a,b)<<endl;
    cout<<binExpIter(a,b)<<endl;
}