#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool>isPrime(N,true);

int main(){
 isPri{me[0]=isPrime[1]=false; 
 for(int i=2;i<N;++i){ //tc=o(N*log(log(N)))
    if(isPrime[i]==true){
        for(int j=2*i;j<n;j+=i){
            isPrime[j]=false;
        }
    }
 } 

 int q;
 cin>>q;
 while (q--)
 {
    int num;
    cin>>num;
    if(isPrime[num]) cout<<"Prime"<<endl; //tc=o(1)
    else cout<<"Not Prime"<<endl;
 }
 
}