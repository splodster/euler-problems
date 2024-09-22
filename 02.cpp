// Problem 2 - Even Fibonacci numbers - Project Euler

#include <iostream>

using namespace std;

int fib(int n);

int main () {
    int sum = 0;

    for (int i = 0; i < 40; i++) {
        if (fib(i) > 4000000)
            break;
        if (fib(i) % 2 == 0) {
            sum += fib(i);
        }
    }

    cout << sum << endl;

    return 0;
}


int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
