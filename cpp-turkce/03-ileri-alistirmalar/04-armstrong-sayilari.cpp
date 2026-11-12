// Soru: Bir doğal sayının Armstrong sayısı olup olmadığını kontrol ediniz.
// Kodun yaptığı: Doğal bir sayının Armstrong sayısı olup olmadığını denetler.

// Tasarım: sayi ---> armstrongMu() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool armstrongMu(int n) {
    if (n < 0) return false;

    int basamaklar = 0;
    int kopya = n;
    // Basamak sayısı 0 için de doğru hesaplanabilsin diye en az bir tur çalışır.
    do {
        basamaklar++;
        kopya = kopya / 10;
    } while (kopya > 0);

    int toplam = 0;
    kopya = n;

    while (kopya > 0) {
        int basamak = kopya % 10;
        int usAl = 1;
        // Her basamağın, toplam basamak sayısı kadar kuvvetini döngüyle buluyoruz.
        for (int i = 0; i < basamaklar; i++) {
            usAl *= basamak;
        }
        toplam += usAl;
        kopya = kopya / 10;
    }

    return toplam == n;
}

int main() {
    assert(armstrongMu(153));
    assert(armstrongMu(370));
    assert(armstrongMu(9));
    assert(!armstrongMu(123));
    cout << "testler başarılı" << endl;
    return 0;
}
