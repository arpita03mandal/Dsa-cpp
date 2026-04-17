#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxSum=0;
    for(int st=0;st<n;st++) {
        int currSum=0;
        for(int end=st;end<n;end++) {
            currSum=currSum+arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout<<"Maximum Subarray sum="<<maxSum<<endl;
    return 0;
}
