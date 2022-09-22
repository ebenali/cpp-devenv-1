#include <iostream>
#include <string>

#include <fmt/format.h>

int main() {
  std::cout << "Hello World\nInput: ";

  std::string data;
  getline(std::cin, data);

  std::cout << fmt::format("Output: {}\n", data);
  return 0;
}
