#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

vector<vector<int>>subsets;

void generate( vector<int>&subset, int i, vector<int>&nums){

    if(i==nums.size()){
        subsets.push_back(subset);
        return;
    }

    generate(subset,i+1,nums);
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back(); //backtracking = undoing

}

int main(){

    int n; cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int>emp; // empty vector
    generate(emp,0,nums);
    for(auto& subset:subsets){
        for(auto& v:subset){
            cout<<v<<' ';
        }
        cout<<nl;
    }
    return 0;

}
