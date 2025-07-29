#include <cctype>
#include <iostream>
#include <string>

std::string cracka(std::string);
std::string output;
std::string input;

int main() {
  std::cin >> input;
  std::string ans = cracka(input);
  std::cout << ans << "\n";
}

std::string cracka(std::string input) {
  for (int j = 0; j < 26; j++) {
    for (int i = 0; i < input.length(); i++) {
      if (std::isupper(input[i])) {
        output += (input[i] - 'A' + j) % 26 + 'A';
      } else if (std::islower(input[i])) {
        output += (input[i] - 'a' + j) % 26 + 'a';
      }
    }
  }
  return output;
}
