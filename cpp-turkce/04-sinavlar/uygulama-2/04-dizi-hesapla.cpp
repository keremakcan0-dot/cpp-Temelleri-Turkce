// Soru: Önceki iki terimin toplamıyla tanımlanan sayı dizisini üretiniz.
// Kodun yaptığı: Her terimi önceki iki terimin toplamı olan bir dizi üretir.

// Tasarım: x:R, y:R, n:N ---> diziHesapla() ---> dizi[R]

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void diziHesapla(double x, double y, int n, double dizi[]) {
    if (n > 0) dizi[0] = x;
    if (n > 1) dizi[1] = y;

    // Dizi terimlerini oluştururken önceki sonuçlar yeni terimi etkileyebilir.
    for (int i = 2; i < n; i++) {
        dizi[i] = dizi[i - 1] + dizi[i - 2];
    }
}

int main() {
    double dizi[20];

    //x=2, y=4, n=8 için dizi:
    //2, 4, 6, 10, 16, 26, 42, 68
    diziHesapla(2, 4, 8, dizi);

    assert(dizi[0] == 2);
    assert(dizi[1] == 4);
    assert(dizi[7] == 68);

    cout << "testler başarılı" << endl;
    return 0;
}
