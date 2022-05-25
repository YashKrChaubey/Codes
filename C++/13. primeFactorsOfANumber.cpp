// Prime Factorisation Of A Number
// Easy

// 1. You are required to display the prime factorisation of a number.

// 2. Take as input a number n.

// 3. Print all its prime factors from smallest to largest.



// For example:

// for n = 1440, the output should be: 2 2 2 2 2 3 3 5


// Constraints
// 2 <= n < 10 ^ 9


// Format
// Input
// n, an integer


// Output
// p1 p2 p3 p4.. all prime factors of n


// Example
// Sample Input

// 1440

// Sample Output
// 2 2 2 2 2 3 3 5

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;

    for (int i = 2; i * i <= n; i++){
        while (n % i == 0){
            cout << (i) << " ";
            n = n / i;
        }
    }

    if (n != 1){
        cout << (n);
    }
}

                        