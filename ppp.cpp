#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    float nilaiMatematika, nilaiFisika, rataRata;

    // Input nilai matematika dan fisika
    cout << "Masukkan nilai Matematika: ";
    cin >> nilaiMatematika;

    cout << "Masukkan nilai Fisika: ";
    cin >> nilaiFisika;

    // Menghitung rata-rata
    rataRata = (nilaiMatematika + nilaiFisika) / 2;

    // Menentukan status lulus atau tidak
    if (rataRata > 60 || (nilaiMatematika > 70 && nilaiFisika >= 0)) {
        cout << "Selamat, Anda lulus!" << endl;
        cout << "Rata-rata nilai: " << rataRata << endl;
    } else {
        cout << "Maaf, Anda tidak lulus." << endl;
    }

    return 0;
}
