#include <iostream>

int add(int a, int b) { return a + b; }

int multiply(int a, int b) { return a * b; }

int main() {
  int (*operation)(int, int) = add;

  std::cout << operation(3, 4) << '\n';

  operation = multiply;

  std::cout << operation(3, 4) << '\n';

  return 0;
}
