// Soru: İndeks ve önceki terimlerin b ile çarpımından dizi oluşturunuz.
// Kodun yaptığı: İlk n terimi üretir: l[0]=a, l[i]=a+i*(k<i için l[k]*b toplamı).

// Tasarım: a, b, n ---> diziUret() ---> dizi[N]

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void diziUret(int a, int b, int n, int dizi[]) {
    if (n <= 0) return;

    dizi[0] = a;

    // Yeni dizi oluşturulurken indeks ile önceki birikimler birlikte kullanılır.
    for (int i = 1; i < n; i++) {
        int toplam = 0;

        for (int k = 0; k < i; k++) {
            toplam += dizi[k] * b;
        }
        dizi[i] = a + i * toplam;
    }
}

int main() {
    int dizi[3];
    diziUret(1, 2, 3, dizi);

    assert(dizi[0] == 1);
    assert(dizi[1] == 3);     //1 + 1 * (1*2)
    assert(dizi[2] == 17);    //1 + 2 * ((1 + 3)*2)
    cout << "testler başarılı" << endl;
    return 0;
}
