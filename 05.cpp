// Problem 5 - Smallest multiple - Project Euler

#include <iostream>

using namespace std;

int main() {
  // what is the smallest positive number evenly divisible by numbers 1 thru 20
  int num = 20;
  bool found = false;
  while (!found) {
    bool divisible = true;
    for (int i = 1; i <= 20; i++) {
      if (num % i != 0) {
        divisible = false; // check if num is divisible by 1-20, break once it's not
        break;
      }
    }
    if (divisible) {
      found = true;
    } else {
      num += 20; // increment by 20 since it must be divisible by 20
    }
  }
  cout << num << endl;
  return 0;
}
