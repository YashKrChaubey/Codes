// *	*	*	*	*	
// *	*	*	*	
// *	*	*	
// *	*	
// *

#include <iostream>
using namespace std;

void pattern2(int n){

    int nst = n; //no. of stars in first row.

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*\t";
        }
        nst--;
        cout<<endl;
    }
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    pattern2(n);//write your code here
    
}