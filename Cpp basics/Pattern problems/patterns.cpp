#include <iostream>
using namespace std;

//number triangle
void nNumberTriangle(int n) {

    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<< " ";
            num += 1;
        }
        cout<<endl;

    }

}

//number crown
void numberCrown(int n) {
    
    int space = 2* (n-1);
    for(int i = 1; i<=n; i++){

        for(int j = 1; j<=i;j++){
            cout<<j<<" ";
        }

        for(int j=1; j<=space; j++){
            cout<<" ";
        }

        for(int j = i; j>=1;j--){
            cout<<j<<" ";
        }

        cout<<endl;
        space -= 2;
    }

}

//binary triangle
void nBinaryTriangle(int n) {

    int start = 1;
    for(int i = 0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start <<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

//star diamond difficulty - medium
void nStarDiamond(int n) {
    // Write your code here.
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

    for(int i=0; i<n; i++){
         //space
         for(int j=0; j<i; j++){
             cout<<" ";
         }
         //star
         for(int j=0; j<2*n-(2*i + 1); j++){
             cout<<"*";
         }
         //space
         for(int j=0; j<i; j++){
             cout<<" ";
         }
         cout<< endl;
    }
}

//reverse space and stars medium difficulty
void nStarTriangle(int n) {
   for(int i=0; i<n; i++){
         //space
         for(int j=0; j<i; j++){
             cout<<" ";
         }
         //star
         for(int j=0; j<2*n-(2*i + 1); j++){
             cout<<"*";
         }
         //space
         for(int j=0; j<i; j++){
             cout<<" ";
         }
         cout<< endl;
    }
}

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
