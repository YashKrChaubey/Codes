// Decimal To Any Base
// Easy

// 1. You are given a decimal number n.
// 2. You are given a base b.
// 3. You are required to convert the number n into its corresponding value in base b.

// Constraints
// 0 <= d <= 512
// 2 <= b <= 10

// Format
// Input
// A number n
// A base b

// Output
// A number representing corresponding value of n in number system of base b

// Example
// Sample Input

// 57
//  2

// Sample Output
// 111001

#include<iostream>
using namespace std;
int DecToAny(int n, int b){
    int pow = 1;
    int ans = 0;
    while(n>0){
        int digit = n%b;
        ans +=digit*pow;
        pow = pow*10;
        n = n/b;
    }
    return ans;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = DecToAny(n,b);
    cout << res << endl;
}