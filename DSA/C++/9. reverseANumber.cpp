// Reverse A Number
// Easy

// 1. You've to display the digits of a number in reverse.
// 2. Take as input "n", the number for which digits have to be display in reverse.
// 3. Print the digits of the number line-wise, but in reverse order.

// Constraints
// 1 <= n < 10^9

// Format
// Input
// "n" where n is any integer.

// Output
// d1
// d2
// d3
// ... digits of the number in reverse

// Example
// Sample Input

// 65784383

// Sample Output
// 3
// 8
// 3
// 4
// 8
// 7
// 5
// 6

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    while (n != 0){
        int digit = n % 10;
        n = n / 10;
        cout << digit << endl;
    }
}