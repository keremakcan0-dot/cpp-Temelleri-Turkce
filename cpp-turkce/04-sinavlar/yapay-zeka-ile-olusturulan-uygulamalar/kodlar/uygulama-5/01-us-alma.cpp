// Soru: Bir gerçek sayının tam sayı kuvvetini hesaplayınız.
// Kodun yaptığı: Gerçel x sayısının tam sayı n üssünü hesaplar; x^0 = 1, x^(-a) = 1/x^a ve 0^0 için 1 döndürür.

// Tasarım: x:R, n:Z ---> usAl() ---> R

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
    // Üs alma işlemi, aynı sayıyı tekrar tekrar çarparak gerçekleştirilebilir.
    for (long long i = 0; i < us; i++) {
        sonuc *= x;
    }

    return (n < 0) ? 1.0 / sonuc : sonuc;
}

int main() {
    assert(usAl(5, 2) == 25);
    assert(usAl(2, 10) == 1024);
    assert(usAl(2, 0) == 1);
    assert(usAl(0, 0) == 1);
    assert(usAl(2, -2) == 0.25);
    assert(usAl(0, -1) == 0.0);
    cout << "testler başarılı" << endl;
    return 0;
}
