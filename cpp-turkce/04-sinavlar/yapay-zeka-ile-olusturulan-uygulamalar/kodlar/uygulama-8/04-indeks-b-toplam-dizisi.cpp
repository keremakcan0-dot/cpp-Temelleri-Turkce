// Soru: Önceki terimlerin toplamına b ekleyerek bir dizi üretiniz.
// Kodun yaptığı: İlk n terimi üretir: l[0]=a, l[i]=b + önceki terimlerin toplamı.

// Tasarım: a, b, n ---> diziUret() ---> dizi[N]

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void diziUret(int a, int b, int n, int dizi[]) {
    if (n <= 0) return;

    dizi[0] = a;

    // Önceki terimlerin toplamı yeni indeksle birlikte kullanılır.
    for (int i = 1; i < n; i++) {
        int oncekilerinToplami = 0;

        for (int k = 0; k < i; k++) {
            oncekilerinToplami += dizi[k];
        }
        dizi[i] = i * b + oncekilerinToplami;
    }
}

int main() {
    int dizi[5];
    diziUret(2, 3, 5, dizi);

    assert(dizi[0] == 2);
    assert(dizi[1] == 5);     //1*3 + 2
    assert(dizi[2] == 13);    //2*3 + (2 + 5)
    assert(dizi[3] == 29);    //3*3 + (2 + 5 + 13)
    assert(dizi[4] == 61);    //4*3 + (2 + 5 + 13 + 29)
    cout << "testler başarılı" << endl;
    return 0;
}
