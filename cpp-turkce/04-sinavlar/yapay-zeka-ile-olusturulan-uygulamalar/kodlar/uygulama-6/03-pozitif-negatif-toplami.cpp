// Soru: Pozitif ve negatif dizi elemanlarını ayrı ayrı toplayınız.
// Kodun yaptığı: Sıfırları yok sayarak dizideki pozitif ve negatif değerleri ayrı ayrı toplar.

// Tasarım: dizi[N] ---> pozitifNegatifleriTopla() ---> sonuclar[2] (pozitifler, negatifler)

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void pozitifNegatifleriTopla(int sayilar[], int adet, int sonuclar[]) {
    sonuclar[0] = 0;   //Pozitif değerlerin toplamı
    sonuclar[1] = 0;   //Negatif değerlerin toplamı

    // Pozitif ve negatif elemanların katkılarını ayrı hesaplıyoruz.
    for (int i = 0; i < adet; i++) {
        if (sayilar[i] > 0) {
            sonuclar[0] += sayilar[i];
        } else if (sayilar[i] < 0) {
            sonuclar[1] += sayilar[i];
        }
    }
}

int main() {
    int sayilar[6] = {-1, -2, -3, 0, 1, 2};
    int sonuclar[2];

    pozitifNegatifleriTopla(sayilar, 6, sonuclar);

    assert(sonuclar[0] == 3);
    assert(sonuclar[1] == -6);
    cout << "testler başarılı" << endl;
    return 0;
}
