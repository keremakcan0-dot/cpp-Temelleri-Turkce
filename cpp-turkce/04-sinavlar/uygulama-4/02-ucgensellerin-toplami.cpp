// Soru: İki doğal sayı arasındaki üçgensel sayıların toplamını bulunuz.
// Kodun yaptığı: Verilen iki doğal sayı arasındaki üçgensel sayıları toplar.

// Tasarım: sayi1<N>, sayi2<N> ----> ucgensellerToplami() ----> toplam<N>

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool ucgenselMi(int sayi) {
    if (sayi < 0) return false;
    if (sayi == 0) return true;
    int toplam = 0;
    int i = 1;

    while (toplam < sayi) {
        toplam += i;
        i++;
    }

    return (toplam == sayi);
}

int ucgensellerToplami(int sayi1, int sayi2) {
    int toplam = 0;
    // Bu hesaplama üçgensel sayıları bir araya getirerek toplam oluşturur.
    for (int i = sayi1; i <= sayi2; i++) {
        if (ucgenselMi(i)) {
            toplam += i;
        }
    }

    return toplam;
}

int main() {
    assert(ucgensellerToplami(1, 10) == 20);
    assert(ucgensellerToplami(4, 8) == 6);
    cout << "testler başarılı" << endl;
    return 0;
}
