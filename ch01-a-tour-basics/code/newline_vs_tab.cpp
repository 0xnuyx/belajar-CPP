/*
 * File: newline_vs_tab.cpp
 * Author: Nuy
 * Date: 20/10/2026
 * Deskripsi: Membandingan perbedaan newline \n dan tab \t
 */

#include <iostream>

int main() {
  std::cout << "A";      // baris pertama
  std::cout << "B\n";    // baris perbedaan dan tambahan newline
  std::cout << "C\tD\n"; // baris kedua dan ada tab dan newline

  return 0;
}
