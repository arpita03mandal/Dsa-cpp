#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={2,4,6,7,8};
    int n=5;
    int target=7;
    for(int i=0;i<n;i++) {
        if(arr[i]==target) {
            cout<<i;
        }
    }
    return 0;
}
