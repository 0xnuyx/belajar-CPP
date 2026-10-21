/*
 * file: basic_types.cpp
 * author: Nuy
 * date: 20/10/2026
 * deskripsi: Membuat, deklarasi dan inisialisasi variabel dan outputnya
 */

#include <iostream>
#include <string>

int main() {
  // deklarasi dan inisialisasi variabel
  std::string nama = "Nuy"; // harus include library string
  int beratBadang = 48;
  float tinggiBadan = 165.7; // untuk angka koma
  char inisialNama = 'A';    // hanya satu karakter saja
  bool wni = true;           //:( // hanya bernilai true / false

  // cetak hasil
  std::cout << "Nama: " << nama << '\n';
  std::cout << "Berat badan: " << beratBadang << '\n';
  std::cout << "Tinggi badan: " << tinggiBadan << '\n';
  std::cout << "Inisial nama: " << inisialNama << '\n';
  std::cout << "Status WNI: " << wni << '\n';

  return 0;
}
