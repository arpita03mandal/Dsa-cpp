#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={5,15,22,1,15,24};
    int largest=INT_MIN;
    int n=6;
    for(int i=0;i<n;i++) {
        if(largest<arr[i]) {
            largest=arr[i];
        }
    }
    cout<<"Largest="<<largest;
    return 0;
}
