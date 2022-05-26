// 		    *	
// 	    *	*	*	
// *	*	*	*	*	
// 	    *	*	*	
// 	    	*	

#include <iostream>
using namespace std;

void pattern5(int n){
    int nst = 1;
   int nsp = n/2;
   
   for(int i=1;i<=n;i++){
       for(int j = 1; j<=nsp; j++){
           cout<<"\t";
       }
       for(int j = 1; j<=nst; j++){
           cout<<"*\t";
       }
       if(i<(n/2+1)){
           nsp--;
           nst+=2;
       }
       else{
           nsp++;
           nst-=2;
       }
       cout<<endl;
   }

}

int main(int argc, char **argv){
    int n;
    cin >> n;
    pattern5(n);
    //write your code here

}