#include <iostream>

int main() {
  int x = 42;
  int *p = &x;
  int **pp = &p;

  std::cout << "x: " << x << '\n';
  std::cout << "*p: " << *p << '\n';
  std::cout << "*pp: " << *pp << '\n';
  std::cout << "**pp: " << **pp << '\n';

  **pp = 99;

  std::cout << "x after update: " << x << '\n';

  return 0;
}
