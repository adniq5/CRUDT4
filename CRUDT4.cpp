#include <iostream>
#include <cstdlib>  // Untuk system("cls")
#include <conio.h>  // Untuk getch()
#include <string>
using namespace std;

// Struktur Data Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string tanggalLahir; // Format DD/MM/YYYY
    float ipk;
};

// Data mahasiswa
Mahasiswa dataMahasiswa[30];
int pos = -1; // Menyimpan posisi terakhir data mahasiswa

void tampilkanMenu() {
    system("cls");
    cout << "\n=== Menu Aplikasi Data Mahasiswa ===\n";
    cout << "1. Masukkan Data Mahasiswa\n";
    cout << "2. Tampilkan Data Mahasiswa\n";
    cout << "3. Update Data Mahasiswa\n";
    cout << "4. Hapus Data Mahasiswa\n";
    cout << "5. Exit\n";
    cout << "Masukkan pilihan: ";
}

void tambahData() {
    system("cls");
    if (pos >= 29) {
        cout << "\nData mahasiswa penuh! Tidak bisa menambah data baru.\n";
        return;
    }

    pos++;
    cout << "\nMasukkan Data Mahasiswa\n";
    cout << "Masukkan NIM: ";
    getline(cin, dataMahasiswa[pos].nim);
    cout << "Masukkan Nama: ";
    getline(cin, dataMahasiswa[pos].nama);
    cout << "Masukkan Alamat: ";
    getline(cin, dataMahasiswa[pos].alamat);
    cout << "Masukkan Tanggal Lahir (DD/MM/YYYY): ";
    getline(cin, dataMahasiswa[pos].tanggalLahir);
    cout << "Masukkan IPK: ";
    cin >> dataMahasiswa[pos].ipk;
    cin.ignore(); // Menghindari masalah dengan buffer input
}

int main() {
    char pilihan;
    do {
        tampilkanMenu();
        pilihan = getch();
        switch (pilihan) {
            case '1':
                tambahData();
                break;
            case '2':
                // Tampilkan data
                break;
            case '3':
                // Update data
                break;
            case '4':
                // Hapus data
                break;
            case '5':
                cout << "\nTerima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "\nPilihan tidak valid. Coba lagi.\n";
                break;
        }
    } while (pilihan != '5');
    return 0;
}
