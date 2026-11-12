// Soru: Bir sayının pozitif olup olmadığını döndüren fonksiyon yazınız.
// Kodun yaptığı: Bir sayının pozitif olup olmadığını döndüren fonksiyon.

// Tasarım: sayi ---> pozitifMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool pozitifMi(int sayi) {
    // Mantıksal karşılaştırma true veya false sonucu üretir.
    return sayi > 0;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(pozitifMi(3) == true);
    assert(pozitifMi(0) == false);
    assert(pozitifMi(-3) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
