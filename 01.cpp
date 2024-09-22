// Problem 1 -- Multiples of 3 and 5 --Project Euler

#include <iostream>

using namespace std;

int main () {
    int sum(0);

    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) { //check if i is a multiple of 3 or 5
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
