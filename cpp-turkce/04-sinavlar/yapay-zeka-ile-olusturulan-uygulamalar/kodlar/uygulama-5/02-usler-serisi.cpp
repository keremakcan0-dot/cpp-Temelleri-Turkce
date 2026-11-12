// Soru: Verilen üsler serisinin toplamını hesaplayınız.
// Kodun yaptığı: Üs alma fonksiyonuyla f(x,n) = x^1/1^1 + ... + x^n/n^n toplamını hesaplar.

// Tasarım: x:R, n:N ---> f() ---> R

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
    // Seri terimlerini önceki hesaplarla ilişkilendirerek oluştururuz.
    for (long long i = 0; i < us; i++) {
        sonuc *= x;
    }

    return (n < 0) ? 1.0 / sonuc : sonuc;
}

double f(double x, int n) {
    double toplam = 0;

    for (int i = 1; i <= n; i++) {
        toplam += usAl(x, i) / usAl(i, i);
    }

    return toplam;
}

int main() {
    assert(f(1, 1) == 1);
    assert(f(2, 1) == 2);
    assert(f(2, 2) == 3);    //2/1 + 4/4
    assert(f(3, 0) == 0);
    cout << "testler başarılı" << endl;
    return 0;
}
