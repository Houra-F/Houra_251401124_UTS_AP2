#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int jumlah = 0;
    int i = 0;

    cout << "masukkan kalimat: ";
    getline(cin, kalimat);

    while (i < kalimat.length()) {
        char huruf = kalimat[i];

        if (huruf == 'a' || huruf == 'A' || huruf == 'u' || huruf == 'U' || huruf == 'o' ||
            huruf == 'O' || huruf == 'I' || huruf == 'i' || huruf == 'E' || huruf == 'e') {
            jumlah++;
        } i++;
    }

    if (jumlah > 0) {
        cout << "kekuatan mantra: " << jumlah << " vokal";
    } else {
        cout << "mantra tidak valid! tidak mengandung vokal.";
    }

    return 0;
}