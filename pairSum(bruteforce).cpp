#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>&nums,int target,int n) {
    vector<int>ans;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(nums[i]+nums[j]==target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main() {
    vector<int>nums={2,7,8,11};
    int n=4;
    int target=10;
    vector<int>ans=pairSum(nums,target,n);
    cout<<"PairSum="<<ans[0]<<","<<ans[1];
    return 0;
}
