#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    //precompute
    int hash[256] = {0}; //for all ASCII characters
    
    for(int i = 0; i<n; i++){
        hash[s[i]]++;
        //hash[s[i]-'a'] // to compute only lower character
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
}