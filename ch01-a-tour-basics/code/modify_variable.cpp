/*
 * file: modify_variable.cpp
 * author: Nuy
 * date: 20/10/2026
 * deskripsi: variable bisa diubah nilainya
 */

#include <iostream>

int main() {
  int var = 10; // ini nilai awal
  std::cout << var << '\n';
  var = 67;                 // ubah nilai var dari 10 ke 67
  std::cout << var << '\n'; // cek nilai yg sekarang
  var = var + 100;
  std::cout << var << '\n'; // cek nilai yg sekarang

  return 0;
}
