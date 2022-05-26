// Pythagorean Triplet
// Easy

// 1. You are required to check if a given set of numbers is a valid pythagorean triplet.
// 2. Take as input three numbers a, b and c.
// 3. Print true if they can form a pythagorean triplet and false otherwise.

// Constraints
// 1 <= a <= 10^9
// 1 <= b <= 10^9
// 1 <= c <= 10^9

// Format
// Input
// a, an integer
// b, an integer
// c, an integer

// Output
// true if the numbers form a pythagorean triplet and false otherwise

// Example
// Sample Input

// 5 3 4

// Sample Output
// true

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    if ((a * a == b * b + c * c) || (b * b == c * c + a * a) || (c * c == a * a + b * b)){
        cout << ("true");
    }else{
        cout << ("false");
    }
}