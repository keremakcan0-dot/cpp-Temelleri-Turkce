// Soru: İki gerçek sayının farkının karesini hesaplayan fonksiyon yazınız.
// Kodun yaptığı: İki gerçel sayı için (x-m)^2 işlemini hesaplar.

// Tasarım: x:R, m:R ---> farkinKaresiniHesapla() ---> R

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

double farkinKaresiniHesapla(double x, double m) {
    // İki değer arasındaki farkın karesi hesaplanarak döndürülür.
    return (x - m) * (x - m);
}

int main() {
    assert(farkinKaresiniHesapla(5, 2) == 9);
    cout << "testler başarılı" << endl;
    return 0;
}
