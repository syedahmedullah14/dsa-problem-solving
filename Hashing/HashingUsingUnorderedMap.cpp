#include<bits/stdc++.h>

//hashing with unordered map to achive O(1) time complexity... as it rarely goes to O(n) in the worst case
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //another method
    // unordered_map<int, int> mpp;
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    //     mpp[arr[i]]++;

    // }

    //pre-compute
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    //iterate in the map
    for(auto it: app){
        cout<< it.first <<"->" << it.second << endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
    }
}