#include <iostream>

int main() {
  int sensorA{25};
  int sensorB{30};

  const int *reading{&sensorA};

  std::cout << *reading << '\n';

  reading = &sensorB;
  std::cout << *reading << '\n';
  return 0;
}
