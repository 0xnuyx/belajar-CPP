#include <iostream>

int main() {
  int attempts = 1;

  while (attempts <= 3) {
    std::cout << "Jawa " << attempts << '\n';

    ++attempts;
  }

  std::cout << "Finished\n";

  return 0;
}
