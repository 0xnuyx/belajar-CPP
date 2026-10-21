/*
 * file: int_limits.cpp
 * author:Nuy
 * date: 20/10/2026
 * deskripsi: mengecek rentang nilai tipe integer
 */

#include <iostream>
#include <limits>

int main() {
  std::cout << "int size: " << sizeof(int) << " byte(s)\n";
  std::cout << "minimum: " << std::numeric_limits<int>::min() << '\n';
  std::cout << "maximum: " << std::numeric_limits<int>::max() << '\n';
  return 0;
}
