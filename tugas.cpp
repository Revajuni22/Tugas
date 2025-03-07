// Judul : persegi panjang (laptop)
// Modifikasi ke class
// Jumat 7 maret 2025
// programer: Reva Juni Pratama
// Nim   : A11.2024.16063
#include <iostream>
using namespace std;

class Laptop {
private:
    double panjang, lebar, tinggi;

public:
    // Constructor
    Laptop(double p, double l, double t) {
        panjang = p;
        lebar = l;
        tinggi = t;
    }

    // Method untuk menghitung volume
    double hitungVolume() {
        return panjang * lebar * tinggi;
    }

    // Method untuk menghitung keliling
    double hitungKeliling() {
        return 2 * (panjang + lebar + tinggi);
    }

    // Method untuk menghitung luas permukaan
    double hitungLuasPermukaan() {
        return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
    }
};

int main() {
    double panjang, lebar, tinggi;

    // Meminta input dari pengguna
    cout << "Masukkan panjang laptop (cm): ";
    cin >> panjang;
    cout << "Masukkan lebar laptop (cm): ";
    cin >> lebar;
    cout << "Masukkan tinggi laptop (cm): ";
    cin >> tinggi;

    // Membuat objek Laptop
    Laptop laptop(panjang, lebar, tinggi);

    // Menampilkan hasil
    cout << "Volume laptop: " << laptop.hitungVolume() << " cm^3" << endl;
    cout << "Keliling laptop: " << laptop.hitungKeliling() << " cm" << endl;
    cout << "Luas permukaan laptop: " << laptop.hitungLuasPermukaan() << " cm^2" << endl;

    return 0;
}
