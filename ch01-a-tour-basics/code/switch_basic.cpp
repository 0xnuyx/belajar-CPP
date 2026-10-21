#include <iostream>

int main() {
  char answer = 'y';

  switch (answer) {
  case 'y':
    std::cout << "Continue\n";
    break;

  case 'n':
    std::cout << "Stop\n";
    break;

  default:
    std::cout << "Unknown answer\n";
    break;
  }

  return 0;
}
