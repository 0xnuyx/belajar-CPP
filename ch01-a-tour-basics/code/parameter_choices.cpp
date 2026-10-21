#include <iostream>
#include <string>

// Value: menerima salinan nilai.
void printScore(int score) { std::cout << "Score: " << score << '\n'; }

// Const reference: membaca objek tanpa menyalinnya.
void printName(const std::string &name) {
  std::cout << "Name: " << name << '\n';
}

// Non-const reference: mengubah objek asli.
void incrementScore(int &score) { ++score; }

// Pointer: objek boleh tidak tersedia.
void setScore(int *score) {
  if (score != nullptr)
    *score = 100;
}

int main() {
  int score = 10;
  std::string name = "Nuy";

  printScore(score);
  printName(name);

  incrementScore(score);
  std::cout << "After increment: " << score << '\n';

  setScore(&score);
  std::cout << "After setScore: " << score << '\n';

  setScore(nullptr); // Tidak melakukan perubahan.

  return 0;
}
