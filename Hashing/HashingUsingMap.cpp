#include<bits/stdc++.h>

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //pre-compute
    map<int, int> mpp;
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