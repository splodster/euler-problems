// Problem 4 - Largest palindrome product - Project Euler

#include <iostream>
#include <string>

using namespace std;

int main() {

  int product, palindrome;
  string productString;

  for (int i = 100; i < 1000; i++) {
    for (int j = 100; j < 1000; j++) {
      product = i * j;
      productString = to_string(product);
      if ((productString ==
           string(productString.rbegin(), productString.rend())) && // compare the reverse of the string
          (product > palindrome)) {
        palindrome = product;
      }
    }
  }
  cout << palindrome << "\n";
  return 0;
}
