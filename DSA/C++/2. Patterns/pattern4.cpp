// *	*	*	*	*	
// 	    *	*	*	*	
// 		    *	*	*	
// 			    *	*	
// 				    *

#include <iostream>
using namespace std;

void pattern4(int n){

    int nst = n; //no. of stars in first row.
    int nsp = 0; //mo. of spaces in first row.

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"\t";
        }
        for(int j=1;j<=nst;j++){
            cout<<"*\t";
        }
        nst--;
        nsp++;
        cout<<endl;
    }
}

int main(int argc, char **argv){
    int n;
    cin >> n;

    pattern4(n);
    //write your code here

}