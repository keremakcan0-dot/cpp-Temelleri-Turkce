// Soru: Doğal bir sayının faktöriyelini hesaplayan fonksiyon yazınız.
// Kodun yaptığı: Doğal bir sayının faktöriyelini hesaplar.

// Tasarım: Sayı ---> faktoriyel() ---> F(sayi)

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

long long faktoriyel(int sayi) {
    // Negatif değerler geçersizdir; 20! sonrasında long long taşabilir.
    if (sayi < 0 || sayi > 20) return 0;
    long long faktoriyelToplami = 1;

    for (int i = 1; i <= sayi; i++) {
        // Faktöriyel, 1’den n’ye kadar sayıların çarpımıdır.
        faktoriyelToplami *= i;
    }

    return faktoriyelToplami;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(faktoriyel(5) == 120);
    assert(faktoriyel(21) == 0);
    assert(faktoriyel(0) == 1);
    assert(faktoriyel(1) == 1);
    assert(faktoriyel(20) == 2432902008176640000LL);
    assert(faktoriyel(21) == 0);
    cout << "testler başarılı" << endl;
    return 0;
}
