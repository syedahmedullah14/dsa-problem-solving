#include<bits/stdc++.h>

int cnt = 0;

int print(int n){
  
   // Base Condition.
   if(n == 0)  return 1;
    cout<<n<<endl;
   return n * print(n-1);
    cout<<n<<endl;

}

int main(){
    int n = 3;
    cout<<print(n);
  return 0;