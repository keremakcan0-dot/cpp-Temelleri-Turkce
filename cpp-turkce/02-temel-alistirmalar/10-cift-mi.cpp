// Soru: Bir sayının çift olup olmadığını kontrol ediniz.
// Kodun yaptığı: Bir sayının çift olup olmadığını belirleyen fonksiyon.

// Tasarım: sayi ---> ciftMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool ciftMi(int sayi) {
    // Bir sayının 2 ile bölümünden kalan 0 ise sayı çifttir.
    return sayi % 2 == 0;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(ciftMi(4) == true);
    assert(ciftMi(0) == true);
    assert(ciftMi(-2) == true);
    assert(ciftMi(7) == false);
    assert(ciftMi(-3) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
