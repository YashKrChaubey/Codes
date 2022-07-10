// Any Base To Decimal
// Easy

// 1. You are given a number n.
// 2. You are given a base b. n is a number on base b.
// 3. You are required to convert the number n into its corresponding value in decimal number system.

// Constraints
// 0 <= d <= 1000000000
// 2 <= b <= 10

// Format
// Input
// A number n
// A base b

// Output
// A decimal number representing corresponding value of n in base b.

// Example
// Sample Input

// 111001
// 2

// Sample Output
// 57

#include<iostream>
using namespace std;
int AnyToDec(int n,int b){
    int power = 1;
    int ans = 0;
    while(n>0){
        int digit = n%10;
        ans = ans + digit*power;
        n = n/10;
        power = power*b;
    }
    return ans;
}
int main(){
    int n;
    int b;
    cin >> n;
    cin >> b;
    int res = AnyToDec(n,b);
    cout<<res<<endl;
}