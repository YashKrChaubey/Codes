// *	*	*	*	*	*	*	*	*	
// 	*	*	*	*	*	*	*	
// 		*	*	*	*	*	
// 			*	*	*	
// 				*	
// 			*		*	
// 		*				*	
// 	*						*	
// *	*	*	*	*	*	*	*	*	

import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    
    int nst = n, nsp = 0;
    for(int i = 0; i < n; i ++) {
        for(int sp = 0; sp < nsp; sp ++) 
            System.out.print("	");
        for(int st = 0; st < nst; st ++) {
            if(i < n / 2 || st == 0 || st == nst - 1 || i == n - 1)
                System.out.print("*	");
            else System.out.print("	");
        }
        System.out.println();
        if (i < n / 2) {
            nsp += 1;
            nst -= 2;
        } else {
            nsp -= 1;
            nst += 2;
        }
    }

  }
}