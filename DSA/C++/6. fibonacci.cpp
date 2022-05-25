// Print Fibonacci Numbers Till N
// Easy

// 1. You've to print first n fibonacci numbers.
// 2. Take as input "n", the count of fibonacci numbers to print.
// 3. Print first n fibonacci numbers.

// Constraints
// 1 <= n < 40

// Format
// Input
// n

// Output
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// .. first n fibonaccis

// Example
// Sample Input

// 10

// Sample Output
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++){
        cout << (a) << endl;
        int c = a + b;
        a = b;
        b = c;
    }
}