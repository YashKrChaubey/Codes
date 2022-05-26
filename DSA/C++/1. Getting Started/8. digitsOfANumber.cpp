// Digits Of A Number
// Easy

// 1. You've to display the digits of a number.
// 2. Take as input "n", the number for which digits have to be displayed.
// 3. Print the digits of the number line-wise.

// Constraints
// 1 <= n < 10^9

// Format
// Input
// "n" where n is any integer.

// Output
// d1
// d2
// d3
// ... digits of the number

// Example
// Sample Input

// 65784383

// Sample Output
// 6
// 5
// 7
// 8
// 4
// 3
// 8
// 3


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int power = 1;
    int temp = n;
    while (temp >= 10){
        temp /= 10;
        power *= 10;
    }

    temp = n;
    while (power != 0){
        int digit = temp / power;
        cout << (digit) << endl;

        temp = temp % power;
        power = power / 10;
    }
}

                        
                        