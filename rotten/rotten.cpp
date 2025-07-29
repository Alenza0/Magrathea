/* ROT13 implementation for practice*/

#include <cctype>
#include <iostream>
#include <string>
std::string rot(const std::string text);

int main() {
  std::string message = "mncubq";
  std::string secret = rot(message);
  std::cout << secret;
}

std::string rot(const std::string text) {
  std::string output{};
  for (int i = 0; i < text.length(); i++) {
    if (std::isupper(text[i])) {
      output += (text[i] - 'A' + 13) % 26 + 'A';
    } else if (std::islower(text[i])) {
      output += (text[i] - 'a' + 13) % 26 + 'a';
    }
  }
  return output;
}
