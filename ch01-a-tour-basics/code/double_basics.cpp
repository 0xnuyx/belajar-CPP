/*
 * file: double_basics.cpp
 * author: nuy
 * date:2026-10-20
 * deskripsi: penggunana tipe data doube dalam IoT
 */

#include <iomanip>
#include <iostream>

int main() {
  double voltage{3.3};
  double current{0.02};

  double power{voltage * current};

  std::cout << std::fixed << std::setprecision(4);
  std::cout << "Voltage: " << voltage << " V\n";
  std::cout << "Current: " << current << " A\n";
  std::cout << "Power: " << power << " W\n";

  return 0;
}
