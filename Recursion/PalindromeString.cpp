#include<iostream>

bool print(int i, string &s){
  
   if(i>=s.size() /2) return true;

    if(s[i] != s[s.size()-i-1]) return false;
    return print(i+1, s);

}

int main(){
   string s = "madam";
    cout<<print(0, s);

  return 0;
}