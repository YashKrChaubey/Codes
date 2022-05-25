// Is A Number Prime
// Easy

// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.

// Constraints
// 1 <= t <= 10000
// 2 <= n < 10^9

// Format
// Input
// A number t
// A number n
// A number n
// .. t number of times

// Output
// prime
// not prime
// not prime
// .. t number of times

// Example
// Sample Input

// 5
// 13
// 2
// 3
// 4
// 5

// Sample Output
// prime
// prime
// prime
// not prime
// prime


#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int div = 2;
        while (div * div <= n){
            if (n % div == 0){
                break;
            }
            div++;
        }

        if (div * div > n){
            cout << ("prime") << endl;
        }
        else{
            cout << ("not prime") << endl;
        }
    }
}