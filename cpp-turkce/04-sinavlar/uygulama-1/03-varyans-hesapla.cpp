// Soru: Gerçek sayı dizisinin anakütle varyansını hesaplayınız.
// Kodun yaptığı: Gerçel sayı dizisinin anakütle varyansını hesaplar. Boş ya da geçersiz uzunluktaki bir dizi için 0 döndürür.

// Tasarım: const double dizi[], int adet ---> ortalamaHesapla() ---> sonuç

// YAZAR: Kerem Akcan
// TARİH: 12/11/2026 (başlık düzenleme tarihi)

#include <iostream>
#include <cassert>

using namespace std;

double ortalamaHesapla(const double dizi[], int adet) {
    if (adet <= 0) return 0.0;

    double toplam = 0.0;
    // Varyans hesabında verilerin ortalamadan uzaklıkları kullanılır.
    for (int i = 0; i < adet; i++) {
        toplam += dizi[i];
    }

    return toplam / adet;
}

double farkinKaresi(double x, double m) {
    return (x - m) * (x - m);
}

double varyansHesapla(const double dizi[], int adet) {
    if (adet <= 0) return 0.0;

    const double ortalama = ortalamaHesapla(dizi, adet);
    double farklarToplami = 0.0;

    //Toplama doğrudan yapılır; sabit boyutlu geçici dizi gerekmez.
    for (int i = 0; i < adet; i++) {
        farklarToplami += farkinKaresi(dizi[i], ortalama);
    }

    return farklarToplami / adet;
}

int main() {
    const double dizi[] = {1.0, 5.0};
    assert(varyansHesapla(dizi, 2) == 4.0);
    assert(varyansHesapla(dizi, 0) == 0.0);
    cout << "testler başarılı" << endl;
    return 0;
}
