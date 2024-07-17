#include <iostream>
using namespace std;

//numver pattern
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
