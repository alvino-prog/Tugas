#include <iostream>
#include <string>

using namespace std;

int main() {
    int coding_score;
    string interview_score;

    cout << "Masukkan nilai coding: ";
    cin >> coding_score;

    cout << "Masukkan nilai interview (A atau B): ";
    cin >> interview_score;

    if (coding_score >= 80) {
        cout << "LOLOS tes coding" << endl;
    } else if (coding_score >= 60) {
        cout << "DIPERTIMBANGKAN tes coding" << endl;
    } else {
        cout << "GAGAL tes coding" << endl;
    }

    if (interview_score == "A" || interview_score == "B") {
        cout << "LOLOS tes interview" << endl;
    } else {
        cout << "GAGAL tes interview" << endl;
    }

    if ((coding_score >= 80 || coding_score >= 60) && (interview_score == "A" || interview_score == "B")) {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}
