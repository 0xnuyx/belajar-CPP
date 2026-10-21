/*
 * file: bentuk_inisialisasi.cpp
 * author: Nuy
 * date;20/10/2026
 * deskripsi: bentuk inisialisasi variabel ada 4
 */

int main() {
  // Copy-initialization (standar bawaan c)
  int a = 100;

  /*
   * Direct-list-initialization
   * menolak narrowing conversion tertentu
   * yaitu konversi misal dari 12 jadi 1.2 nanti error
   */
  int b{12};

  // Copy-list-initialization (cek narrowing conversion juga)
  int c = {109};

  // Direct-initialization (sama kayak yg standar hanya pakai () saja )
  int d(100);
}
