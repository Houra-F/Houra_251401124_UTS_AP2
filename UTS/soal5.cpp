#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    int i = 0; 
    int jumlah = 0; 

    while (i < kalimat.length()) {
        if (kalimat[i] != ' ' && (i == 0 || kalimat[i - 1] == ' ')) {
            jumlah++;
        } i++; 
    }

    cout << "Jumlah judul buku: " << jumlah << endl;

    return 0;
}