// Soru: n ve k değerleri için C(n,k) kombinasyonunu hesaplayınız.
// Kodun yaptığı: C(n,k) kombinasyon sayısını hesaplar. Geçersiz girdide ya da n>20 için 0 döndürür (20! işaretsiz long long içine sığar).

// Tasarım: int sayi ---> faktoriyel() ---> sonuç

// YAZAR: Kerem Akcan
// TARİH: 12/11/2026 (başlık düzenleme tarihi)

#include <iostream>
#include <cassert>

using namespace std;

unsigned long long faktoriyel(int sayi) {
    unsigned long long sonuc = 1;

    for (int i = 2; i <= sayi; i++) {
        sonuc *= static_cast<unsigned long long>(i);
    }
    // Kombinasyon hesabında faktöriyel oranına dikkat edilir; büyük girdilerde taşma mümkündür.
    return sonuc;
}

unsigned long long kombinasyonHesapla(int sayi, int kalan) {
    if (sayi < 0 || kalan < 0 || kalan > sayi || sayi > 20) {
        return 0;
    }

    return faktoriyel(sayi) / (faktoriyel(kalan) * faktoriyel(sayi - kalan));
}

int main() {
    assert(kombinasyonHesapla(5, 3) == 10);
    assert(kombinasyonHesapla(5, 0) == 1);
    assert(kombinasyonHesapla(5, 6) == 0);
    assert(kombinasyonHesapla(-1, 0) == 0);
    cout << "testler başarılı" << endl;
    return 0;
}
