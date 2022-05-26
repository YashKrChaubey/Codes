// *	
// *	*	
// *	*	*	
// *	*	*	*	
// *	*	*	*	*	


#include <iostream>
using namespace std;

void pattern1(int n){

    int nst = 1;            //no. of stars in first row.

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*\t";
        }
        nst++;
        cout<<endl;
    }
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
   pattern1(n);//write your code here
   
}