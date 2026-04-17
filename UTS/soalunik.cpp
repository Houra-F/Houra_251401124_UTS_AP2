#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    int i = 0;
    int jumlahJudul = 0;
    int jumlahHuruf = 0;

    while (i < kalimat.length()) {
        if (kalimat[i] != ' ' && (i == 0 || kalimat[i - 1] == ' ')) {
            jumlahJudul++;
        }
        if (kalimat[i] != ' ') {
            jumlahHuruf++;
        }i++;
    }

    cout << "Jumlah judul buku: " << jumlahJudul << endl;
    cout << "Jumlah karakter selain spasi: " << jumlahHuruf << endl;

    return 0;
}