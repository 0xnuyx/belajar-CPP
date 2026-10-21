#include <iostream>

int main() {
  int *sensorData = nullptr;

  if (sensorData != nullptr) {
    std::cout << *sensorData << '\n';
  } else {
    std::cout << "Data sensor belum tersedia\n";
  }

  return 0;
}
