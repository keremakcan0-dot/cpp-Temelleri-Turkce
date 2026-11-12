// Soru: Önceki terimlerin toplamına b ekleyerek bir seri üretiniz.
// Kodun yaptığı: Her terimi önceki terimlerin toplamına b ekleyerek bir dizi üretir.

// Tasarım: a, b, n ---> seriOlustur() ---> dizi[N]

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void seriOlustur(int a, int b, int n, int dizi[]) {
    if (n <= 0) return;

    dizi[0] = a;

    // Yinelemeli dizide sonraki terim, önceden hesaplanan terimlere bağlıdır.
    for (int i = 1; i < n; i++) {
        int oncekilerinToplami = 0;

        for (int k = 0; k < i; k++) {
            oncekilerinToplami += dizi[k];
        }
        dizi[i] = oncekilerinToplami * b;
    }
}

int main() {
    int a = 2, b = 3, n = 5;
    int dizi[5];
    seriOlustur(a, b, n, dizi);

    assert(dizi[0] == 2);
    assert(dizi[1] == 6);
    assert(dizi[2] == 24);
    assert(dizi[4] == 384);

    for (int i = 0; i < n; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;
    return 0;
}
