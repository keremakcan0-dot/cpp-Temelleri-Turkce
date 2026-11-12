// Soru: Bir sayının bol sayı olup olmadığını kontrol ediniz.
// Kodun yaptığı: Öz bölenlerinin toplamı kendisinden büyük olan bol sayıları tanır.

// Tasarım: a:N ---> bolMu() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool bolMu(int a) {
    int bolenlerToplami = 0;

    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            bolenlerToplami += i;
        }
    }
    // Bu fonksiyon özel bölünebilme koşulunu sınar.
    return bolenlerToplami > a;
}

int main() {
    assert(bolMu(12) == true);    //1+2+3+4+6 = 16
    assert(bolMu(18) == true);
    assert(bolMu(6) == false);    //6 mükemmel sayıdır, bol sayı değildir.
    assert(bolMu(7) == false);
    assert(bolMu(1) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
