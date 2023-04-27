#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, tempatTinggal, pangkat;
    int umur, uangTabungan;

    // Input data dari user
    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan umur: ";
    cin >> umur;
    cout << "Masukkan tempat tinggal: ";
    cin.ignore(); // untuk membersihkan input buffer
    getline(cin, tempatTinggal);
    cout << "Masukkan uang tabungan (dalam dolar): ";
    cin >> uangTabungan;

    // Analisa ciri-ciri untuk menentukan pangkat
    if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && uangTabungan > 10000000) {
        pangkat = "Don";
    }
    else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && uangTabungan >= 1000000 && uangTabungan <= 2000000) {
        pangkat = "Underboss";
    }
    else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && uangTabungan < 1000000) {
        pangkat = "Capo";
    }
    else {
        pangkat = "Tidak diketahui";
    }

    // Output hasil analisa
    if (pangkat != "Tidak diketahui") {
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    else {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}
