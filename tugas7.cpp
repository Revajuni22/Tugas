#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk panjang, lebar, dan tinggi
    double panjang, lebar, tinggi;

    // Meminta input dari pengguna
    cout << "Masukkan panjang laptop (cm): ";
    cin >> panjang;
    cout << "Masukkan lebar laptop (cm): ";
    cin >> lebar;
    cout << "Masukkan tinggi laptop (cm): ";
    cin >> tinggi;

    // Menghitung volume, keliling, dan luas permukaan laptop
    double volume = panjang * lebar * tinggi;
    double keliling = 2 * (panjang + lebar + tinggi);
    double luasPermukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);

    // Menampilkan hasil
    cout << "Volume laptop: " << volume << " cm^3" << endl;
    cout << "Keliling laptop: " << keliling << " cm" << endl;
    cout << "Luas permukaan laptop: " << luasPermukaan << " cm^2" << endl;

    return 0;
}
