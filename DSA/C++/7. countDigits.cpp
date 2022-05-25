// Count Digits In A Number
// Easy

// 1. You've to count the number of digits in a number.
// 2. Take as input "n", the number for which the digits has to be counted.
// 3. Print the digits in that number.

// Constraints
// 1 <= n < 10^9

// Format
// Input
// "n" where n is any integer.

// Output
// "d" where d is the number of digits in the number "n"

// Example
// Sample Input

// 65784383

// Sample Output
// 8


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int digit = 0;
    while (n != 0){
        n = n / 10;
        digit++;
    }
    cout << digit << endl;
}
                        
                        