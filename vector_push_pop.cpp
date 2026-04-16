#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec={1,2,3,4,5};
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.pop_back();
    for(int i:vec) {
        cout<<i<<endl;
    }
    return 0;
}
