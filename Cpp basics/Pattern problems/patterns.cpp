#include <iostream>
using namespace std;

//space and stars medium difficulty
void nStarTriangle(int n) {

    for(int i=0; i<n; i++){
         //space
         for(int j=0; j<n-i-1; j++){
             cout<<" ";
         }
         //star
         for(int j=0; j<2*i+1; j++){
             cout<<"*";
         }
         //space
         for(int j=0; j<n-i-1; j++){
             cout<<" ";
         }

         cout<< endl;
    }
}

//number pattern
void nTriangle(int n) {

	for(int i = 1; i<=n; i++){
		for(int j=1; j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}

}

//reverse stars
void seeding(int n) {
	for(int i = n; i>0; i--){
        for(int j=0; j<i; j++){
            cout<< "* " ;
        }
        cout<<endl;
    }
}

//reverse numbers
void nNumberTriangle(int n) {
    
    for(int i = n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" " ;
        }
        cout<<endl;
    }
}

int main() {

    //basic star pattern
    for(int i =0; i<5; i++){
        for(int j=0; j<i; j++){
            cout<< "*" ;
        }
        cout<<endl;
    }
}
