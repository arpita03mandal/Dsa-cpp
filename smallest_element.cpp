#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[]={5,15,22,1,15,24};
    int smallest=INT_MAX;
    int n=6;
    for(int i=0;i<n;i++) {
        if(smallest>arr[i]) {
            smallest=arr[i];
        }
    }
    cout<<"Smallest= "<<smallest;
    return 0;
}
