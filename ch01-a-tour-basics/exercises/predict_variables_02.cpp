#include <iostream>

int main() {
  int x = 8;

  x = x + 2;
  x = x - 3;

  std::cout << x << '\n';
  std::cout << (x == 7) << '\n';
  return 0;
}
