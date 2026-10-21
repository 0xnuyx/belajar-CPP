#include <iostream>

int main() {
  int temperature = 28;
  int &sensorReading = temperature;

  std::cout << "temperature: " << temperature << '\n';

  std::cout << "sensorReading: " << sensorReading << '\n';

  sensorReading = 35;

  std::cout << "After update:\n";
  std::cout << "temperature: " << temperature << '\n';

  std::cout << "sensorReading: " << sensorReading << '\n';

  return 0;
}
