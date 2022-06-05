/*to do: take a positive integer n as input. if n is even, divide n by 2, but if n is 
odd, multiply n by 3 then add 1 to n. Repeat this process until n = 1. */
 
#include <iostream>
using namespace std; 
 
int main() {
    long long n = 0; 
    cin >> n;
    cout << n << " "; 
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            cout << n << " "; 
        }
        else {
            n = (n * 3) + 1; 
            cout << n << " "; 
        }
    }
    return 0; 
}
