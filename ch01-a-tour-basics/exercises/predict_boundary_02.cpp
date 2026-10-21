#include <iostream>

int main() {
  int health = 30;

  if (health <= 0) {
    std::cout << "Dead\n";
  } else if (health < 30) {
    std::cout << "Critical\n";
  } else {
    std::cout << "Healthy\n";
  }
  return 0;
}
