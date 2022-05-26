// Gcd And Lcm
// Easy

// 1. You are required to print the Greatest Common Divisor (GCD) of two numbers. 

// 2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers. 

// 3. Take input "num1" and "num2" as the two numbers. 

// 4. Print their GCD and LCM.


// Constraints
// 2 <= n <= 10^9

// Format
// Input
// num1
// num2
// .. the numbers whose GCD and LCM we have to find.

// Output
// a
// b
// .. where 'a' and 'b' are the GCD and LCM respectively.

// Example
// Sample Input

// 36
// 24

// Sample Output
// 12
// 72


#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    int tnum1 = num1;
    int tnum2 = num2;

    while (tnum1 % tnum2 != 0){
        int rem = tnum1 % tnum2;
        tnum1 = tnum2;
        tnum2 = rem;
    }

    int gcd = tnum2;
    int lcm = (num1 * num2) / gcd;

    cout << (gcd) << endl;
    cout << (lcm) << endl;
}         