// Rotate A Number
// Easy

// 1. You are given two numbers n and k. You are required to rotate n, k times to the right. If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
// 2. Take as input n and k.
// 3. Print the rotated number.
// 4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
//    n = 12340056
//    k = 3
//    r = 05612340

// Constraints
// 1 <= n < 10^9
// -10^9 < k < 10^9

// Format
// Input
// "n" where n is any integer.
// "K" where k is any integer.

// Output
// "r", the rotated number

// Example
// Sample Input

// 562984
// 2

// Sample Output
// 845629


#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int temp = n;
    int digits = 0;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    k = k % digits;
    if(k < 0){
        k += digits;
    }
    int div = (int)(pow(10,k));
    int multiplier = (int)(pow(10,digits - k));
    int fh = n / div;
    int sh = n % div;
    int rot = sh * multiplier + fh;
    cout<<rot;
    return 0;
}
                                
                                
                                
                                
                                
                                
                                