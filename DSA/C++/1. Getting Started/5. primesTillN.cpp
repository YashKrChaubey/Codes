// Print All Primes Till N
// Easy

// 1. You've to print all prime numbers between a range. 
// 2. Take as input "low", the lower limit of range.
// 3. Take as input "high", the higher limit of range.
// 4. For the range print all the primes numbers between low and high (both included).

// Constraints
// 2 <= low < high < 10 ^ 6

// Format
// Input
// low 
// high

// Output
// n1
// n2
// .. all primes between low and high (both included)

// Example
// Sample Input

// 6 
// 24

// Sample Output
// 7
// 11
// 13
// 17
// 19
// 23

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low;
    cin >> low;

    int high;
    cin >> high;

    for (int num = low; num <= high; num++){
        int div = 2;
        while (div * div <= num){
            if (num % div == 0){
                break;
            }
            div++;
        }

        if (div * div > num){
            cout << (num) << endl;
        }
    }
}
                        