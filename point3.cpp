#include <iostream>

using namespace std;

int main() {
    int nomor_punggung;
    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomor_punggung;

    if (nomor_punggung % 2 == 0) {
        if (nomor_punggung >= 50 && nomor_punggung <= 100) {
            cout << "Pemain dengan nomor punggung " << nomor_punggung << " adalah capten team." << endl;
        } else {
            cout << "Pemain dengan nomor punggung " << nomor_punggung << " adalah target attacker." << endl;
        }
    } else {
        if (nomor_punggung % 15 == 0) {
            cout << "Pemain dengan nomor punggung " << nomor_punggung << " adalah keeper." << endl;
        } else if (nomor_punggung > 90) {
            cout << "Pemain dengan nomor punggung " << nomor_punggung << " adalah playmaker." << endl;
        } else {
            cout << "Pemain dengan nomor punggung " << nomor_punggung << " adalah defender." << endl;
        }
    }

    return 0;
}
