#include <iostream>
using namespace std;

int main() {
    string nama;
    string nim;
    int n1, n2, n3;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);

    cout << "NIM: ";
    cin >> nim;

    cout << "Nilai Algoritma dan Pemrograman: ";
    cin >> n1;

    cout << "Nilai Probabilitas dan Statistika: ";
    cin >> n2;

    cout << "Nilai Sistem Operasi: ";
    cin >> n3;

    cout << "\nHasil:\n";

    if (n1 >= 60)
        cout << "Algoritma dan Pemrograman: Lulus." << endl;
    else
        cout << "Algoritma dan Pemrograman: Tidak Lulus." << endl;

    if (n2 >= 60)
        cout << "Probabilitas dan Statistika: Lulus." << endl;
    else
        cout << "Probabilitas dan Statistika: Tidak Lulus." << endl;

    if (n3 >= 60)
        cout << "Sistem Operasi: Lulus." << endl;
    else
        cout << "Sistem Operasi: Tidak Lulus. Silakan Ulangi di Tahun depan!" << endl;

    int rata = (n1 + n2 + n3) / 3;
    cout << "Nilai Rata-rata Semester ini: " << rata;

    return 0;
}