#include<iostream>

//reverse of a number
using namespace std;

int main() {

	int n;
	cin>>n;
	int revN=0;

	while(n>0){
		int ld = n%10;
		n = n/10;
		revN = (revN*10) +ld;

	}
	cout<<revN;	
}

//count number of digits
int countDigits(int n) {
  int cnt = (int)(log10(n) + 1);
  return cnt;
}
