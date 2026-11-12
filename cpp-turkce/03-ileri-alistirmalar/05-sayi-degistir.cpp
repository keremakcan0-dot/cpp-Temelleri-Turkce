// Soru: Dizideki belirli değerleri yeni bir değerle değiştiriniz.
// Kodun yaptığı: Bir dizideki belirli sayıları, konumlarını koruyarak başka bir sayıyla değiştirir.

// Tasarım: dizi[N], aranan, yeni ---> degistir() ---> dizi[N] değiştirilmiş

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void degistir(int dizi[], int adet, int aranan, int yeni) {
    for (int i = 0; i < adet; i++) {
        // Sadece aranan değere eşit elemanları değiştiriyoruz; diğerleri korunur.
        if (dizi[i] == aranan) {
            dizi[i] = yeni;
        }
    }
}

int main() {
    int dizi[6] = {1, 2, 3, 2, 5, 2};
    degistir(dizi, 6, 2, 9);

    assert(dizi[0] == 1);
    assert(dizi[1] == 9);
    assert(dizi[2] == 3);
    assert(dizi[3] == 9);
    assert(dizi[4] == 5);
    assert(dizi[5] == 9);
    cout << "testler başarılı" << endl;
    return 0;
}
