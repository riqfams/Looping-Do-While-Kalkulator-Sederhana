#include <iostream>
using namespace std;

int main()
{
    int program;
    float angka1, angka2, hasil;
    char ulang;

    do {
        cout << "Pilih program yang Anda ingin jalankan :\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n";
        cin >> program;

        if (program == 1){
            cout << "=== Penjumlahan ===\n";
            cout << "Masukan angka pertama : ";
            cin >> angka1;
            cout << "Masukan angka kedua : ";
            cin >> angka2;

            hasil = angka1 + angka2;
            cout << angka1 << " + " << angka2 << " = " << hasil << endl;

            cout << "Tekan Y jika Anda ingin menjalankan program lagi : ";
            cin >> ulang;
        } else if (program == 2){
            cout << "=== Pengurangan ===\n";
            cout << "Masukan angka pertama : ";
            cin >> angka1;
            cout << "Masukan angka kedua : ";
            cin >> angka2;

            hasil = angka1 - angka2;
            cout << angka1 << " - " << angka2 << " = " << hasil << endl;

            cout << "Tekan Y jika Anda ingin menjalankan program lagi : ";
            cin >> ulang;
        } else if (program == 3){
            cout << "=== Perkalian ===\n";
            cout << "Masukan angka pertama : ";
            cin >> angka1;
            cout << "Masukan angka kedua : ";
            cin >> angka2;

            hasil = angka1 * angka2;
            cout << angka1 << " x " << angka2 << " = " << hasil << endl;

            cout << "Tekan Y jika Anda ingin menjalankan program lagi : ";
            cin >> ulang;

        } else if (program == 4){
            cout << "=== Pembagian ===\n";
            cout << "Masukan angka pertama : ";
            cin >> angka1;
            cout << "Masukan angka kedua : ";
            cin >> angka2;

            hasil = angka1 / angka2;
            cout << angka1 << " : " << angka2 << " = " << hasil << endl;

            cout << "Tekan Y jika Anda ingin menjalankan program lagi : ";
            cin >> ulang;
        } 
    } while (ulang == 'Y' || ulang == 'y');
}