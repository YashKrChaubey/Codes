// *	*	*	*	*	*	*	*	*	
// 	*	*	*	*	*	*	*	
// 		*	*	*	*	*	
// 			*	*	*	
// 				*	
// 			*		*	
// 		*				*	
// 	*						*	
// *	*	*	*	*	*	*	*	*	

#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int nst = n, nsp = 0;
    for(int i = 0; i < n; i ++) {
        for(int sp = 0; sp < nsp; sp ++) 
            cout<<"\t";
        for(int st = 0; st < nst; st ++) {
            if(i < n / 2 || st == 0 || st == nst - 1 || i == n - 1)
                cout<<"*\t";
            else cout<<"\t";
        }
        cout<<endl;
        if (i < n / 2) {
            nsp += 1;
            nst -= 2;
        } else {
            nsp -= 1;
            nst += 2;
        }
    }
    
    
}
