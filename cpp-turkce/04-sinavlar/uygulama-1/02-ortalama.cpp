// Soru: Gerçek sayı dizisinin aritmetik ortalamasını hesaplayınız.
// Kodun yaptığı: Gerçel sayı dizisinin aritmetik ortalamasını hesaplar. Boş ya da geçersiz uzunluktaki bir dizi için 0 döndürür.

// Tasarım: dizi<R>, adet ---> ortalama() ---> R

// YAZAR: Kerem Akcan
// TARİH: 12/11/2026 (başlık düzenleme tarihi)

#include <iostream>
#include <cassert>

using namespace std;

double ortalama(const double dizi[], int adet) {
    if (adet <= 0) return 0.0;

    double toplam = 0.0;
    // Önce elemanları toplayıp ardından eleman sayısına bölerek ortalamayı buluruz.
    for (int i = 0; i < adet; i++) {
        toplam += dizi[i];
    }

    return toplam / adet;
}

int main() {
    double dizi[5] = {1, 2, 3, 4, 5};
    assert(ortalama(dizi, 5) == 3.0);
    assert(ortalama(dizi, 1) == 1.0);
    assert(ortalama(dizi, 0) == 0.0);
    cout << "testler başarılı" << endl;
    return 0;
}
