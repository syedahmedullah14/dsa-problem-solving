//reverse array using two pointers

#include<iostream>
using namespace std;

void print(int l, int arr[], int r){
  
   if(l>=r) return;
    swap(arr[l], arr[r]);
    print(l+1, arr, r-1);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<=n; i++) cin>>arr[i];
    print(0, arr, n);
    for(int i = 1; i<=n; i++) cout<<arr[i]<<" ";

  return 0;
}