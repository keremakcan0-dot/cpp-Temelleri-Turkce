// Soru: Katsayı ve üs dizileriyle polinomun bir noktadaki değerini bulunuz.
// Kodun yaptığı: Katsayı ve üs dizilerini göstericilerle kullanarak polinom değerini hesaplar.

// Tasarım: x:R, katsayilar:[R], usler:[N], n ---> polinom() ---> R

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

double usAl(double x, int n) {
    if (n == 0) return 1.0;
    if (x == 0.0 && n < 0) return 0.0; //Tanımsız durum: hata değeri olarak 0 kullanılır.

    long long us = n;
    if (us < 0) us = -us;

    double sonuc = 1.0;
    // Polinomun terimleri uygun kuvvetlerle hesaplanıp biriktirilir.
    for (long long i = 0; i < us; i++) {
        sonuc *= x;
    }

    return (n < 0) ? 1.0 / sonuc : sonuc;
}

double polinom(double x, const double* katsayilar, const int* usler, int adet) {
    double toplam = 0;

    for (int i = 0; i < adet; i++) {
        toplam += *(katsayilar + i) * usAl(x, *(usler + i));
    }

    return toplam;
}

int main() {
    //Deneme polinomu: 3x^4 + 8x^3 - 5x + x^2
    double katsayilar[4] = {3, 8, -5, 1};
    int usler[4] = {4, 3, 1, 2};

    assert(polinom(0, katsayilar, usler, 4) == 0);
    assert(polinom(1, katsayilar, usler, 4) == 7);      //3 + 8 - 5 + 1
    assert(polinom(2, katsayilar, usler, 4) == 106);    //48 + 64 - 10 + 4
    cout << "testler başarılı" << endl;
    return 0;
}
