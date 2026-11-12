// Soru: Girilen sayının pozitif, negatif veya sıfır olduğunu belirleyiniz.
// Kodun yaptığı: Girilen sayının pozitif, negatif ya da sıfır olduğunu denetler. Ekrana yazmak ve klavyeden okumak için iostream gerekir.

// Tasarım: girilenSayi ---> if/else ---> konsol iletisi

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

int main() {
    int girilenSayi;
    cout << "Bir sayı giriniz: ";
    cin >> girilenSayi;

    // if koşul doğruysa ilk blok çalışır; değilse sonraki koşula geçilir.
    if (girilenSayi > 0) {
        cout << "Girilen sayı pozitif" << endl;
    // else if, ilk koşul sağlanmadığında ikinci durumu kontrol eder.
    } else if (girilenSayi < 0) {
        cout << "Girilen sayı negatif" << endl;
    // else, önceki koşulların hiçbiri sağlanmadığında çalışır.
    } else {
        cout << "Girilen sayı sıfır" << endl;
    }

    return 0;
}
