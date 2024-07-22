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

//palindrome
bool palindrome(int n)
{

    int original = n;
    int revN=0;
	while(n>0){
		int ld = n%10;
		n = n/10;
		revN = (revN*10) +ld;

	}
    if(original==revN){
        return true;
    }	
    else{
        return false;
    }
}

//armstrong
bool checkArmstrong(int n){

	int dup = n;
	int sum = 0;
	int digit = (int)(log10(n) + 1);
	while(n>0){
		int ld = n%10;
		n = n/10;
		sum += pow(ld, digit);
	}
	if (sum==dup){
		return true;
	} 
	else{
	 return false;
	 }
}

//Print al divisor
int* printDivisors(int n, int &size){

    vector <int> ls;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ls.push_back(i); 

            if((n/i) != i){
                ls.push_back(n/i);
            }
        }

    }
    sort(ls.begin(), ls.end());
    for(auto it: ls) cout<<it<<" ";
}

