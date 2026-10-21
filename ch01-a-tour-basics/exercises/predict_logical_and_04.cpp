#include <iostream>

int main() {
  int health = 25;
  bool hasPotion = true;

  if (health > 0 && hasPotion) {
    std::cout << "Can heal\n";
  } else {
    std::cout << "Cannot heal\n";
  }
  return 0;
}
