/*
 * file: bool_basics.cpp
 * author: Nuy
 * date: 20/10/2026
 * deskripsi: bool menyatakan benar atau salah aja true/false
 */

#include <iostream>

int main() {
  bool isAlive{true};
  bool isGameOver{false};

  std::cout << std::boolalpha;
  std::cout << "Player alive: " << isAlive << '\n';
  std::cout << "Game over: " << isGameOver << '\n';

  return 0;
}
