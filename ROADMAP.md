# C++ Learning Roadmap

Roadmap ini jadi panduan belajar C++ dari buku *The C++ Programming Language, 4th Edition* karya Bjarne Stroustrup, sambil pelan-pelan mengikuti perkembangan **Modern C++**.

Idenya simpel: **buku jadi jalur utama, eksperimen jadi cara buat cek pemahaman, dan fitur C++ modern dipelajari saat konsepnya sudah nyambung.** Jadi kita nggak perlu belajar semua fitur sekaligus.

## Goals

- Paham alasan di balik konsep C++, bukan cuma hafal syntax.
- Menulis catatan dengan bahasa sendiri dan menyimpan contoh kode yang bisa dicoba ulang.
- Mengikuti 44 bab buku sesuai urutan aslinya.
- Membandingkan contoh dari konteks C++11 dengan cara modern saat memang ada manfaatnya.
- Memakai pengetahuan itu dalam latihan dan project kecil.

## Big Picture: Dua jalur yang saling melengkapi

### 1. Book track

Ikuti empat bagian dan 44 bab dari buku. Edisi ini ditulis pada masa C++11, jadi contoh dan penjelasannya akan dipelajari dalam konteks tersebut terlebih dahulu.

### 2. Modern C++ track

Setelah konsep dasarnya dipahami, pelajari perubahan penting di C++14, C++17, C++20, dan C++23. C++26 jadi bahan eksplorasi kalau standar dan dukungan compiler/library sudah jelas.

Dua jalur ini nggak perlu dikerjakan sebagai dua kurikulum terpisah. Misalnya, saat belajar pointer, array, dan reference, kita bisa lanjut membahas smart pointers lalu `std::string_view` atau `std::span` setelah konsep lifetime dan ownership mulai masuk akal.

## Standar C++ yang dipakai

Update: **19 Oktober 2026**.

ISO/IEC 14882:2024 adalah standar C++ yang sudah diterbitkan dan dikenal sebagai **C++23**. C++26 masih dalam proses standardisasi, jadi di roadmap ini C++23 menjadi target modern utama, sedangkan C++26 hanya untuk eksplorasi dan eksperimen.

| Versi | Peran dalam roadmap | Topik yang akan ditemui |
|---|---|---|
| **C++11** | Baseline buku dan fondasi | `auto`, range-based `for`, lambda, move semantics, smart pointers, `nullptr`, thread dasar |
| **C++14** | Update kecil setelah dasarnya paham | generic lambda, penyempurnaan `constexpr`, `std::make_unique` |
| **C++17** | Modernisasi yang berguna untuk everyday C++ | structured bindings, `if constexpr`, `std::optional`, `std::variant`, `std::string_view`, `std::filesystem` |
| **C++20** | Fokus modernisasi utama | concepts, ranges, `std::span`, coroutine, modules, `std::jthread`, `<=>` |
| **C++23** | Lanjutan setelah C++20 | `std::expected`, `std::mdspan`, `std::print`/`std::println` jika library mendukung, peningkatan ranges |
| **C++26** | Exploratory track | Ikuti fitur yang sudah disetujui dan cek dukungan compiler/library; jangan anggap proposal sebagai fitur final |

**Catatan:** nggak semua fitur wajib dipelajari sekarang. Prioritaskan konsep yang membantu memahami bahasa dan menulis kode yang lebih jelas, aman, serta mudah dirawat.

---

## Study Workflow

Pakai siklus ini untuk setiap bab atau topik:

1. **Read** — baca beberapa bagian kecil, tandai istilah atau hal yang masih bikin bingung.
2. **Understand** — tulis ulang intinya dengan bahasa sendiri; jangan sekadar menyalin buku.
3. **Predict** — sebelum menjalankan kode, tebak output atau perilakunya dan tulis alasannya.
4. **Experiment** — compile, run, ubah satu hal, lalu amati perbedaannya.
5. **Practice** — kerjakan latihan kecil tanpa langsung melihat solusi.
6. **Compare** — kalau relevan, bandingkan versi C++11 dengan versi modern secara terpisah.
7. **Review** — coba jelaskan konsep tanpa melihat catatan, lalu update `PROGRESS.md`.

Untuk tiap konsep, coba jawab beberapa pertanyaan ini:

- Masalah apa yang diselesaikan konsep ini?
- Gimana cara kerjanya, dan kenapa perilakunya seperti itu?
- Kapan konsep ini cocok digunakan?
- Apa trade-off, batasan, atau common mistakes-nya?
- Apakah ada pendekatan modern yang lebih pas? Kalau ada, apa bedanya?

## Stage 0 — Setup

Sebelum mulai banyak eksperimen, pastikan compiler dan proses build sudah bisa digunakan.

- [ ] Cek compiler dengan `g++ --version`.
- [ ] Coba compile dan jalankan satu file `.cpp`.
- [ ] Biasakan menggunakan compiler warnings.
- [ ] Catat versi compiler dan flag standar saat hasil eksperimen bergantung pada versi bahasa.

Contoh di Linux dengan GCC:

```bash
# Contoh yang mengikuti konteks buku
g++ -std=c++11 -Wall -Wextra -Wpedantic main.cpp -o main
./main

# Coba lagi untuk contoh yang memang relevan dengan C++20
g++ -std=c++20 -Wall -Wextra -Wpedantic main.cpp -o main
./main

# Untuk fitur C++23, cek juga dukungan standard library
g++ -std=c++23 -Wall -Wextra -Wpedantic main.cpp -o main
./main
```

Kalau suatu fitur gagal di-compile, cek versi GCC, standard library, flag yang dipakai, dan dukungan fiturnya. Compiler yang menerima `-std=c++23` belum tentu sudah mendukung setiap fitur library C++23 secara lengkap.

---

# Part I — Introductory Material

**Goal:** dapat gambaran besar C++ sebelum masuk ke detail bahasa.

| Bab | Materi | Fokus belajar | Modern C++ connection |
|---|---|---|---|
| 1 | Notes to the Reader | Pahami struktur buku dan cara memakainya | Jadikan roadmap dan catatan repo sebagai learning journal |
| 2 | A Tour of C++: The Basics | Program sederhana, tipe, fungsi, dan control flow | Kenali syntax dasar dan gaya C++11 |
| 3 | A Tour of C++: Abstraction Mechanisms | Class, fungsi, dan abstraction | Nanti hubungkan dengan RAII dan value semantics |
| 4 | A Tour of C++: Containers and Algorithms | Containers, iterators, algorithms | Bandingkan STL klasik dengan ranges C++20 setelah dasar STL dipahami |
| 5 | A Tour of C++: Concurrency and Utilities | Utility dan concurrency secara umum | Nanti pelajari `std::jthread`, stop tokens, dan fitur modern lain |

### Checkpoint Part I

- [ ] Bisa compile dan menjalankan program sederhana.
- [ ] Bisa menjelaskan fungsi, class, container, algorithm, dan concurrency secara garis besar.
- [ ] Punya daftar pertanyaan yang mau dibahas lagi di bab terkait.

Bab 1 lebih berfungsi sebagai panduan pembaca, jadi nggak perlu diperlakukan seperti bab coding biasa.

# Part II — Basic Facilities

**Goal:** memahami building blocks bahasa C++ yang dipakai hampir di semua program.

| Bab | Materi | Fokus belajar | Modern C++ connection |
|---|---|---|---|
| 6 | Types and Declarations | Tipe, deklarasi, inisialisasi, deduksi tipe | `auto`, `decltype`, `constexpr`, `std::byte` (C++17) |
| 7 | Pointers, Arrays, and References | Pointer, array, reference, alamat, lifetime, batas akses | Smart pointers, `std::string_view` (C++17), `std::span` (C++20), `std::mdspan` (C++23) |
| 8 | Structures, Unions, and Enumerations | `struct`, `union`, enum, representasi data | `enum class` (C++11), `std::variant` (C++17), designated initializers (C++20) |
| 9 | Statements | Percabangan, loop, dan control flow | Range-based `for` (C++11), `if` initializer dan `if constexpr` (C++17) |
| 10 | Expressions | Operator, konversi, dan evaluasi ekspresi | Fold expressions (C++17), `<=>` (C++20) |
| 11 | Select Operations | Operasi bahasa terpilih yang dibahas buku | Catat konteks dan aturan bahasa yang memengaruhi perilakunya |
| 12 | Functions | Parameter, return value, overload, dan pemanggilan fungsi | Move semantics (C++11), generic lambda (C++14), `std::invoke` (C++17) |
| 13 | Exception Handling | `try`, `throw`, `catch`, dan error flow | Bandingkan exception dengan `std::optional` (C++17) dan `std::expected` (C++23) |
| 14 | Namespaces | Scope dan organisasi nama | Hubungkan dengan desain library; modules dibahas di bab program |
| 15 | Source Files and Programs | Header, source files, declaration/definition, proses build | Interface/implementation yang rapi dan pengenalan modules C++20 |

### Checkpoint Part II

- [ ] Bisa menjelaskan tipe, deklarasi, inisialisasi, dan fungsi dengan contoh sendiri.
- [ ] Paham perbedaan pointer dan reference, termasuk lifetime dan ownership dasar.
- [ ] Bisa memakai control flow dan menulis fungsi dengan tujuan yang jelas.
- [ ] Bisa memecah program kecil menjadi beberapa file dan compile dengan benar.
- [ ] Paham bahwa error handling bisa memakai pendekatan yang berbeda, sesuai kebutuhan.

**Modernization note:** pelajari fasilitas C++14 dan C++17 yang berhubungan dengan konsep di atas. Untuk concepts, ranges, coroutine, dan modules, tunggu sampai fondasi yang relevan lebih kuat.

# Part III — Abstraction Mechanisms

**Goal:** belajar membangun tipe sendiri, mengelola object lifetime, dan menulis kode generik.

| Bab | Materi | Fokus belajar | Modern C++ connection |
|---|---|---|---|
| 16 | Classes | Class, interface, access control, invariant | `=default`, `=delete`, `[[nodiscard]]`, desain interface |
| 17 | Construction, Cleanup, Copy, and Move | Constructor/destructor, copy, move, lifetime | RAII, smart pointers, Rule of Zero/Three/Five, `std::make_unique` |
| 18 | Overloading | Function dan operator overloading | `<=>` (C++20) dan overload yang mudah dipahami |
| 19 | Special Operators | Operator khusus dan efeknya | Kapan perlu implementasi sendiri dan kapan tidak |
| 20 | Derived Classes | Inheritance dan base/derived classes | Bandingkan inheritance dengan composition |
| 21 | Class Hierarchies | Polymorphism dan hierarki class | Dynamic polymorphism vs `std::variant` (C++17) |
| 22 | Run-Time Type Information | RTTI dan pemeriksaan tipe runtime | `dynamic_cast` dan kapan desain bisa dibuat lebih sederhana |
| 23 | Templates | Template function dan class | Variadic templates (C++11), `if constexpr` (C++17), concepts (C++20) |
| 24 | Generic Programming | Algoritma dan abstraksi lintas tipe | Concepts dan ranges (C++20) |
| 25 | Specialization | Specialization untuk kasus tertentu | Bandingkan dengan overload dan `if constexpr` |
| 26 | Instantiation | Kapan template dibuat dan bagaimana error muncul | Compile-time, translation units, dan struktur kode |
| 27 | Templates and Hierarchies | Hubungan template dan class hierarchy | Generic interface dan composition |
| 28 | Metaprogramming | Pemrograman saat compile time | `if constexpr` (C++17), `consteval`/`constinit` (C++20) |
| 29 | A Matrix Design | Desain abstraksi untuk matriks | `std::span` (C++20), `std::mdspan` (C++23), layout dan ownership |

### Checkpoint Part III

- [ ] Bisa merancang class dengan interface dan invariant yang masuk akal.
- [ ] Paham constructor, destructor, copy, move, lifetime, dan RAII.
- [ ] Bisa memilih antara inheritance, composition, atau alternatif lain dengan alasan yang jelas.
- [ ] Bisa menulis template sederhana dan mulai memahami constraints-nya.
- [ ] Paham ide dasar concepts dan metaprogramming tanpa harus menghafal semua syntax.

# Part IV — The Standard Library

**Goal:** memanfaatkan standard library daripada membuat ulang semua komponen dari nol.

| Bab | Materi | Fokus belajar | Modern C++ connection |
|---|---|---|---|
| 30 | Standard Library Summary | Peta umum standard library | Gunakan sebagai index saat mencari tool yang dibutuhkan |
| 31 | STL Containers | Sequence, associative, dan unordered containers | Pilih berdasarkan kebutuhan operasi, kompleksitas, dan invalidation |
| 32 | STL Algorithms | Searching, sorting, transforming, dan algoritma lain | Ranges algorithms (C++20) |
| 33 | STL Iterators | Iterator dan cara algoritma mengakses data | Ranges dan views (C++20) |
| 34 | Memory and Resources | Alokasi, resource, dan lifetime | RAII, smart pointers, allocator, non-owning views |
| 35 | Utilities | Utility umum dari standard library | `optional`/`variant` (C++17), `span` (C++20), `expected` (C++23) |
| 36 | Strings | String dan pemrosesan teks | `string_view` (C++17), format/print modern jika tersedia |
| 37 | Regular Expressions | Pattern matching dengan regex | Pahami biaya dan batasannya sebelum memakai regex |
| 38 | I/O Streams | Input/output stream | Bandingkan dengan `std::format` dan `std::print` saat sesuai |
| 39 | Locales | Locale dan pemformatan data | Ketahui kapan locale memengaruhi parsing/formatting |
| 40 | Numerics | Fasilitas numerik | `std::numbers` dan bit operations (C++20), `mdspan` (C++23) |
| 41 | Concurrency | Thread safety, synchronization, dan atomics | Pahami data race sebelum memakai abstraksi yang lebih tinggi |
| 42 | Threads and Tasks | Thread, task, dan eksekusi | `std::jthread`, stop tokens (C++20); coroutine sebagai topik lanjutan |
| 43 | The C Standard Library | Menggunakan fasilitas library C dari C++ | Interop, ownership, dan perbedaan idiom C/C++ |
| 44 | Compatibility | Kompatibilitas dan variasi implementasi | Cek dukungan compiler/library dan feature-test macros |

### Checkpoint Part IV

- [ ] Bisa memilih container sesuai kebutuhan program.
- [ ] Bisa memakai algoritma STL dan memahami peran iterator.
- [ ] Paham beda object yang memiliki resource dan view yang hanya mengakses data.
- [ ] Tahu cara memeriksa dukungan fitur sebelum memakainya.
- [ ] Paham risiko dasar concurrency, khususnya data race.

---

# Modern C++ Track

Track ini melengkapi buku. Kerjakan setelah konsep yang terkait mulai dipahami; nggak perlu buru-buru membuka semua topik baru.

## C++11 — Build the foundation

Pelajari sambil mengikuti buku:

- `auto`, `nullptr`, `enum class`, dan uniform initialization.
- Range-based `for` dan lambda.
- Move semantics dan rvalue references.
- `std::unique_ptr`, `std::shared_ptr`, dan `std::weak_ptr`.
- `constexpr`, `noexcept`, serta dasar thread/mutex/future.

**Target:** bisa membaca contoh buku dan memahami kenapa fitur-fitur ini berguna.

## C++14 — Small but useful improvements

Pelajari setelah dasar function, lambda, dan `constexpr` mulai nyaman:

- Generic lambda.
- Penyempurnaan `constexpr`.
- `std::make_unique`.
- Binary literals dan digit separators.

**Practice:** ambil satu contoh C++11 dan lihat apakah fitur C++14 membuatnya lebih jelas.

## C++17 — Modern everyday C++

Pelajari setelah sebagian besar Part II, lalu lanjutkan saat belajar class dan standard library:

- Structured bindings dan `if` dengan initializer.
- `if constexpr` dan fold expressions.
- `std::optional`, `std::variant`, dan `std::any`.
- `std::string_view` dan `std::filesystem`.

**Practice:** pilih program kecil dan bandingkan dua versi dari sisi readability, error handling, dan ownership.

## C++20 — Main modernization target

Mulai lebih serius setelah konsep class, lifetime, templates, dan STL cukup kuat:

1. **Concepts** — menyatakan persyaratan untuk tipe atau operasi generik.
2. **Ranges/views** — menyusun operasi data dengan cara yang lebih composable.
3. **`std::span`** — view ke data kontigu tanpa mengambil ownership.
4. **`std::jthread` dan stop tokens** — pengelolaan thread yang lebih terstruktur.
5. **`constexpr`, `consteval`, `constinit`** — memahami evaluasi compile-time dan initialization.
6. **`<=>`** — fasilitas three-way comparison.
7. **Modules** — pelajari konsep dan coba jika toolchain mendukungnya dengan baik.
8. **Coroutines** — topik lanjutan; pahami lifetime dan control flow dulu.
9. **`std::format`** — cek dukungan library sebelum menggunakannya.

**Target:** paham masalah yang diselesaikan fitur modern, bukan cuma bisa menyalin syntax.

## C++23 — Useful follow-up

Setelah C++20:

- `std::expected` untuk hasil yang bisa berupa value atau error.
- `std::print` dan `std::println` jika didukung standard library.
- `std::mdspan` untuk akses data multidimensi tanpa harus memiliki datanya.
- Peningkatan ranges dan fitur terpilih seperti explicit object parameter (`this` deducing) serta `if consteval`.

**Target:** tahu kapan fitur C++23 membantu dan kapan pendekatan yang lebih sederhana sudah cukup.

## C++26 — Explore, don't rush

C++26 masih dalam proses standardisasi pada saat roadmap ini diperbarui. Untuk sekarang:

- [ ] Cek status terbaru dari sumber resmi.
- [ ] Bedakan proposal, draft, dan standar yang sudah final.
- [ ] Periksa dukungan compiler dan standard library.
- [ ] Simpan eksperimen C++26 secara terpisah dari contoh utama.

Nggak perlu menjadikan C++26 sebagai syarat untuk menyelesaikan roadmap ini.

---

## Quick Map: dari bab buku ke topik modern

| Saat belajar… | Topik modern yang bisa menyusul |
|---|---|
| Types, declarations, dan expressions (Bab 6, 10) | `auto`, `decltype`, `constexpr`, `std::byte`, fold expressions, `<=>` |
| Pointer, array, reference (Bab 7) | smart pointers, lifetime/ownership, `string_view`, `span`, `mdspan` |
| Functions (Bab 12) | lambda, move semantics, generic lambda, `std::invoke` |
| Exception dan error handling (Bab 13) | `optional` dan `expected` |
| Source files/programs (Bab 15) | build setup yang rapi, interface/implementation, modules |
| Classes dan object lifetime (Bab 16–22) | RAII, Rule of Zero, smart pointers, composition, `variant` |
| Templates (Bab 23–28) | `if constexpr`, concepts, `requires`, compile-time programming |
| Containers, algorithms, iterators (Bab 31–33) | ranges, views, pemilihan container yang tepat |
| Memory dan utilities (Bab 34–35) | ownership, non-owning views, `optional`, `variant`, `expected` |
| Strings, I/O, numerics (Bab 36–40) | `string_view`, format/print, `std::numbers`, bit operations |
| Concurrency dan threads (Bab 41–42) | `std::jthread`, stop tokens, coroutine sebagai materi lanjutan |

---

## Project Ideas

Project nggak perlu besar. Mulai dari yang bisa selesai, lalu tambah fitur seiring belajar.

### 1. Console tool

Mulai setelah Part I dan sebagian Part II.

- [ ] Membaca input dan menampilkan output.
- [ ] Memecah program ke fungsi yang jelas.
- [ ] Menangani input yang salah.
- [ ] Menulis beberapa test case manual.

Contoh: calculator, unit converter, atau simple study tracker.

### 2. Data manager

Mulai setelah memahami class dasar dan containers.

- [ ] Membuat tipe data sendiri.
- [ ] Memilih container dan algorithms yang sesuai.
- [ ] Memisahkan file jika program mulai berkembang.
- [ ] Mencatat alasan pilihan desain.

Contoh: book catalog atau CLI learning tracker.

### 3. Resource-safe program

Mulai setelah Bab 16–17 dan Bab 34.

- [ ] Menggunakan RAII.
- [ ] Memperjelas ownership dan lifetime.
- [ ] Menggunakan smart pointers saat memang sesuai.
- [ ] Menjelaskan strategi error handling.

### 4. Modern C++ comparison

Mulai setelah memahami C++17 dan dasar C++20.

- [ ] Pilih satu masalah sederhana.
- [ ] Buat versi dasar dan versi modern secara terpisah.
- [ ] Bandingkan readability, safety, kompleksitas, dan dukungan toolchain.
- [ ] Catat trade-off-nya. Versi baru tidak otomatis selalu lebih baik.

### 5. Final project

Setelah Part IV dan fitur modern yang relevan.

- [ ] Menggabungkan class, standard library, dan error handling.
- [ ] Menggunakan fitur modern berdasarkan kebutuhan.
- [ ] Menulis cara build/run, keterbatasan, dan keputusan desain.
- [ ] Menguji kondisi normal dan edge cases.

---

## Review Habit

Biar catatannya benar-benar kepakai lagi:

- **Setelah sesi:** tulis 3–5 kalimat tentang yang dipelajari dan satu pertanyaan yang masih terbuka.
- **Sesi berikutnya:** coba jawab pertanyaan lama sebelum membaca ulang.
- **Beberapa hari kemudian:** kerjakan satu latihan tanpa melihat solusi.
- **Setelah satu part:** rangkum konsep penting dan hubungan antar bab.
- **Saat mengerjakan project:** balik ke catatan yang relevan, lalu coba debug sendiri sebelum mencari jawaban.

Kita nggak perlu menghafal seluruh syntax. Yang penting tahu cara kerja konsep, bisa memilih solusi, dan tahu cara mencari informasi teknis yang tepat.

## Repository Rules

- Catatan konsep disimpan di folder bab terkait.
- Satu file contoh `.cpp` sebaiknya punya satu tujuan eksperimen yang jelas.
- Pisahkan contoh `C++11` dan `C++20`/`C++23` kalau tujuannya membandingkan versi.
- Tulis **prediction → result → conclusion** untuk eksperimen penting.
- Cantumkan halaman buku atau link referensi ketika mengambil ide dari sumber.
- Kalau pemahaman berubah, update catatan lama. Nggak masalah kalau catatan berkembang.
- Tulis penjelasan dengan kata-kata sendiri dan jangan upload salinan panjang dari buku.

Contoh struktur jika folder eksperimen sudah mulai dibutuhkan:

```text
ch07-pointers-arrays-and-references/
├── README.md
├── examples/
│   ├── cpp11-pointer-basics.cpp
│   ├── cpp11-unique-ptr.cpp
│   └── cpp20-span-view.cpp
└── exercises/
    └── array-traversal.cpp
```

Nggak perlu bikin semua folder ini dari awal. Tambahkan saat memang sudah ada contoh atau latihan untuk disimpan.

## Kapan satu bab dianggap selesai?

Jangan tandai selesai hanya karena sudah membaca sampai akhir. Minimal, coba pastikan:

- [ ] Bisa menjelaskan inti bab dengan kata-kata sendiri.
- [ ] Bisa membaca dan memodifikasi contoh kode.
- [ ] Sudah mencoba latihan atau eksperimen.
- [ ] Bisa menjelaskan satu kesalahan atau hal yang sempat membingungkan.
- [ ] Tahu topik apa yang masih perlu di-review.

Update statusnya di `PROGRESS.md` sesuai kondisi sebenarnya.

## References

- [Bjarne Stroustrup — The C++ Programming Language, 4th Edition](https://www.stroustrup.com/4th.html)
- [ISO/IEC 14882:2024 — Programming languages: C++](https://www.iso.org/standard/83626.html)
- [ISO — draft C++ standard under development](https://www.iso.org/standard/91179.html)
- [Standard C++ — status of the standard](https://isocpp.org/STD/STATUS)
- [cppreference — compiler support](https://en.cppreference.com/w/cpp/compiler_support)
- [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines)
- [C++ working draft repository](https://github.com/cplusplus/draft)

Status standar dan dukungan compiler bisa berubah. Saat mencoba fitur baru, cek sumber terbaru dan tulis compiler/standard flag yang benar-benar digunakan.

---

**Keep it simple:** ikuti buku, pahami konsepnya, coba sendiri, dokumentasikan hasilnya, lalu pelajari modern update yang relevan. Pelan-pelan tapi konsisten.

