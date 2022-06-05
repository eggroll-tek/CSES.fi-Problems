#include <iostream>
using namespace std; 
 
int main() {
    long long t; 
    long long partialSum = 0;  
    cin >> t; 
    long long arr[t];
    long long fullSum = t * (t + 1) / 2; 
    for (long long i = 0; i < t - 1; i++) {
        cin >> arr[i]; 
    }
 
    for (long long j = 0; j < t - 1; j++) {
        partialSum += arr[j];
    }
    cout << fullSum - partialSum << '\n';
}
