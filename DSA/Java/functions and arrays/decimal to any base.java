// Decimal To Any Base
// Easy

// 1. You are given a decimal number n.
// 2. You are given a base b.
// 3. You are required to convert the number n into its corresponding value in base b.

// Constraints
// 0 <= d <= 512
// 2 <= b <= 10

// Format
// Input
// A number n
// A base b

// Output
// A number representing corresponding value of n in number system of base b

// Example
// Sample Input

// 57
//  2

// Sample Output
// 111001

import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = getValueInBase(n, b);
      System.out.println(dn);
   }
  
   public static int getValueInBase(int n, int b){
       int rv = 0;
  
      int p = 1;
      while(n > 0){
          int d = n % b;
          n = n / b;
          rv += p * d;
          p = p * 10;
      }
  
       return rv;
   }
  }
                        
                        