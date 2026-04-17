#include <iostream>
using namespace std;

int main() {
    string biner;
    cout << "Masukkan bilangan: ";
    cin >> biner;
//1000
    int desimal = 0;

    for (int i = 0; i < biner.length(); i++) {
        if (biner[i] != '0' && biner[i] != '1') {
            cout << "pesan rusak!";
            return 0;
        }

        desimal = desimal * 2 + (biner[i] - '0');
    }

    cout << "angka desimal adalah " << desimal;

    return 0;
}