// Soru: Çift ve tek indislerde bulunan elemanları ayrı ayrı toplayınız.
// Kodun yaptığı: Dizinin çift ve tek indekslerindeki değerleri ayrı ayrı toplar.

// Tasarım: dizi[N] ---> konumlariTopla() ---> sonuc[2] (çift indeksler, tek indeksler)

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void konumlariTopla(int dizi[], int adet, int sonuc[]) {
    sonuc[0] = 0;   //Çift indekslerdeki değerlerin toplamı (0, 2, 4...)
    sonuc[1] = 0;   //Tek indekslerdeki değerlerin toplamı (1, 3, 5...)

    // İndeksin tek veya çift olmasına göre farklı toplamlar tutulur.
    for (int i = 0; i < adet; i++) {
        if (i % 2 == 0) {
            sonuc[0] += dizi[i];
        } else {
            sonuc[1] += dizi[i];
        }
    }
}

int main() {
    int dizi[5] = {1, 2, 3, 4, 5};
    int sonuc[2];

    konumlariTopla(dizi, 5, sonuc);

    assert(sonuc[0] == 9);   //1 + 3 + 5
    assert(sonuc[1] == 6);   //2 + 4
    cout << "testler başarılı" << endl;
    return 0;
}
