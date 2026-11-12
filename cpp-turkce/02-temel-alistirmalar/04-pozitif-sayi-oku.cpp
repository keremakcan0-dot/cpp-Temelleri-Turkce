// Soru: Kullanıcı geçerli bir pozitif sayı girene kadar giriş isteyiniz.
// Kodun yaptığı: Kullanıcı pozitif bir sayı girene kadar sayı ister.

// Tasarım: +([ n <= 0 ]) ---> n değerini oku

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

int main() {
    int sayi = 0;

    cout << "Bir sayı yazınız: ";
    cin >> sayi;

    // Geçerli pozitif sayı girilene kadar giriş işlemini tekrarlarız.
    while (sayi <= 0) {
        if (cin.eof()) {
            cout << "Giriş sonlandı; pozitif sayı girilmedi." << endl;
            return 1;
        }
        //Kullanıcı metin girerse giriş hatası temizlenir ve satır atılır.
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Sayı pozitif olmalıdır. Yeniden deneyiniz: ";
        cin >> sayi;
    }

    cout << "Pozitif sayı: " << sayi << endl;
    return 0;
}
