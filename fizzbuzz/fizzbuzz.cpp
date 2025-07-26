#include <iostream>

int n = 100;
int main() {
  // std::cin >> n;
  for (int i = 1; i < n; i++) {
    if (i % 15 == 0) {
      std::cout << i << " Fizzbuzz" << "\n";
    } else if (i % 5 == 0) {
      std::cout << i << " Buzz" << "\n";
    } else if (i % 3 == 0) {
      std::cout << i << " Fizz" << "\n";
    } else {
      std::cout << i << "\n";
    };
  };
  return 0;
}
