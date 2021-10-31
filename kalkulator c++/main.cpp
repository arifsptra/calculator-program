#include <iostream>

using namespace std;

int main()
{

    // Deklarasi
    char aritmatika;

    // Kalimat Panduan Penggunaan Program Untuk User
    cout << "Selamat Datang\n";
    cout << "Silahkan Pilih Operator Aritmatika yang Ingin Anda Gunakan\n";
    cout << "Operator Penjumlahan Gunakan + \n";
    cout << "Operator Pengurangan Gunakan - \n";
    cout << "Operator Pembagian Gunakan / \n";
    cout << "Operator Perkalian Gunakan * \n";
    cout << "Operator Modulus Gunakan % \n";

    // Program Input Operator Untuk User
    cout << "\nMasukkan Operator = ";
    cin >> aritmatika;

    if(aritmatika == '+' || aritmatika == '-' || aritmatika == '/' || aritmatika == '*'){
        // Deklarasi
        float a, b, hasil;
        cout << "Masukkan Nilai Pertama = ";
        cin >> a;
        cout << "Masukkan Nilai Kedua = ";
        cin >> b;
        // Program Kalkulasi
        switch(aritmatika){
            case '+':
                hasil = a+b;
                cout << "Hasil Perhitungan ";
                cout << a << aritmatika << b;
                cout << " = " << hasil;
                break;
            case '-':
                hasil = a-b;
                cout << "Hasil Perhitungan ";
                cout << a << aritmatika << b;
                cout << " = " << hasil;
                break;
            case '/':
                hasil = a/b;
                cout << "Hasil Perhitungan ";
                cout << a << aritmatika << b;
                cout << " = " << hasil;
                break;
            case '*':
                hasil = a*b;
                cout << "Hasil Perhitungan ";
                cout << a << aritmatika << b;
                cout << " = " << hasil;
                break;
        }
    }else if(aritmatika == '%' ){
        int a, b, hasil;
        cout << "Masukkan Nilai Pertama = ";
        cin >> a;
        cout << "Masukkan Nilai Kedua = ";
        cin >> b;
        // Program Kalkulasi
        switch(aritmatika){
            case '%':
            hasil = a%b;
            cout << "Hasil Perhitungan ";
            cout << a << aritmatika << b;
            cout << " = " << hasil;
            break;
        }
    }else{
        cout << "Maaf, Operator yang Anda Masukkan Tidak Valid";
    }
    return 0;
}
