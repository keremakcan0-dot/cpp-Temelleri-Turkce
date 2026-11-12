// Soru: İki sayı arasındaki tam sayıları sıralı bir dizide oluşturunuz.
// Kodun yaptığı: Küçük sayıdan büyük sayıya kadar sayıları içeren bir dizi oluşturur.

// Tasarım: a, b ---> fonksiyon() ---> dizi[N], adet

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void diziOlustur(int a, int b, int dizi[], int& adet) {
    int kucuk = a;
    int buyuk = b;

    // Başlangıç ve bitiş ters girilse bile aralığı küçükten büyüğe kuruyoruz.
    if (a > b) {
        kucuk = b;
        buyuk = a;
    }

    adet = 0;

    for (int i = kucuk; i <= buyuk; i++) {
        // Yazılan her yeni elemandan sonra adet bir artırılır.
        dizi[adet] = i;
        adet++;
    }
}

int main() {
    int a = 5;
    int b = 7;
    int dizi[3];
    int adet;

    diziOlustur(a, b, dizi, adet);

    assert(adet == 3);
    assert(dizi[0] == 5 && dizi[2] == 7);

    //Sayılar ters sırada verilse de sonuç aynıdır.
    diziOlustur(b, a, dizi, adet);
    assert(adet == 3);
    assert(dizi[0] == 5 && dizi[2] == 7);

    for (int i = 0; i < adet; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;
    return 0;
}
