// Soru: Önceki terimlerin toplamına i*b ekleyerek dizi üretiniz.
// Kodun yaptığı: İlk n terimi üretir: l[0]=a, l[i]=i*b + önceki terimlerin toplamı.

// Tasarım: a, b, n ---> diziUret() ---> dizi[N]

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void diziUret(int a, int b, int n, int dizi[]) {
    if (n <= 0) return;

    dizi[0] = a;

    // Her yeni dizi elemanı önceki terimlerin birikmiş toplamından etkilenir.
    for (int i = 1; i < n; i++) {
        int oncekilerinToplami = 0;

        for (int k = 0; k < i; k++) {
            oncekilerinToplami += dizi[k];
        }
        dizi[i] = b + oncekilerinToplami;
    }
}

int main() {
    int dizi[4];
    diziUret(1, 2, 4, dizi);

    assert(dizi[0] == 1);
    assert(dizi[1] == 3);    //2 + 1
    assert(dizi[2] == 6);    //2 + (1 + 3)
    assert(dizi[3] == 12);   //2 + (1 + 3 + 6)
    cout << "testler başarılı" << endl;
    return 0;
}
