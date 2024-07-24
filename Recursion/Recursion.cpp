#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(){
   
   // Base Condition.
   if(cnt == 3)  return;
   cout<<cnt<<endl;

   // Count Incremented
   cnt++;
   print();

}

int main(){
    print();
  return 0;
}

//backtracking
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

int print(n,n){
  
   // Base Condition.
   if(cnt == 3)  return;

   print(n-1,n);
  cout<<"Jaser"<<endl;
}

int main(){
    int n;
    cin >> n;
    print(n,n);
  return 0;
}

}