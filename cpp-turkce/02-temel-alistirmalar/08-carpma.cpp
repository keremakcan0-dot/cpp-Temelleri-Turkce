// Soru: 1 ile verilen tam sayı arasındaki sayıların çarpımını hesaplayınız.
// Kodun yaptığı: Bir tam sayı alıp 1’den o sayıya kadarki çarpımı hesaplar.

// Tasarım: sayi ---> carpimHesapla() ---> carpim

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

int carpimHesapla(int sayi) {
    int carpim = 1;
    // Çarpım, tekrarlı toplama yaklaşımıyla hesaplanır.
    for (int i = 1; i <= sayi; i++) {
        carpim *= i;
    }

    return carpim;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(carpimHesapla(5) == 120);
    assert(carpimHesapla(1) == 1);
    assert(carpimHesapla(0) == 1);
    cout << "testler başarılı" << endl;
    return 0;
}
