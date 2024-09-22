// Problem 3 - Largest prime factor - Project Euler

#include <iostream>

using namespace std;

int main () {
    
    long long n = 600851475143;

    for (int i = 3; i < n; i += 2) {
        while (n % i == 0) {
            n /= i;
        }
    }

    cout << n << endl;

    return 0;
}
