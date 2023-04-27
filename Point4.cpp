#include <iostream>
using namespace std;

int main() {
    int nomor_punggung;
    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomor_punggung;

    if (nomor_punggung % 2 == 0) {
        if (nomor_punggung >= 50 && nomor_punggung <= 100) {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi capten team." << endl;
        } else {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi target attacker." << endl;
        }
    } else {
        if (nomor_punggung % 15 == 0) {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi keeper." << endl;
        } else if (nomor_punggung > 90) {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi playmaker." << endl;
        } else {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi defender." << endl;
        }
    }

    // Menghitung jumlah kalori setelah melakukan aktivitas olahraga
    int waktu_lari, waktu_pushup, waktu_plank;
    cout << "Masukkan lama waktu lari (dalam menit): ";
    cin >> waktu_lari;
    cout << "Masukkan lama waktu push-up (dalam menit): ";
    cin >> waktu_pushup;
    cout << "Masukkan lama waktu plank (dalam menit): ";
    cin >> waktu_plank;

    int kalori_lari = waktu_lari * 12; // 60 kalori setiap 5 menit, maka 12 kalori per menit
    int kalori_pushup = waktu_pushup * 4; // 200 kalori setiap 30 menit, maka 4 kalori per menit
    int kalori_plank = waktu_plank * 5;

    int total_kalori = kalori_lari + kalori_pushup + kalori_plank;
    cout << "Total kalori yang dibakar: " << total_kalori << endl;

    return 0;
}
