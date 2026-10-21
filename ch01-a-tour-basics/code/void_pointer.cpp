#include <iostream>

int main() {
  int temperature = 25;
  double voltage = 3.3;

  void *data = &temperature;

  int *intPointer = static_cast<int *>(data);
  std::cout << *intPointer << '\n';

  data = &voltage;

  double *doublePointer = static_cast<double *>(data);
  std::cout << *doublePointer << '\n';

  return 0;
}
