// Soru: Fibonacci dizisinin ilk n terimini bir diziye yerleştiriniz.
// Kodun yaptığı: Fibonacci dizisinin ilk n terimini bir dizide döndürür.

// Tasarım: Doğal ---> fibonacci() ---> [tam sayı], Doğal

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void fibonacci(int n, int dizi[], int& adet) {
    adet = n;
    // Dizinin ilk elemanlarına yalnızca ilgili uzunluk varsa erişiyoruz.
    if (n >= 1) dizi[0] = 0;
    if (n >= 2) dizi[1] = 1;

    for (int i = 2; i < n; i++) {
        // Her terim bir önceki iki terimin toplamından oluşturulur.
        dizi[i] = dizi[i - 1] + dizi[i - 2];
    }
}

int main() {
    int n = 6;
    int dizi[6];
    int adet;

    fibonacci(n, dizi, adet);

    assert(adet == 6);
    assert(dizi[0] == 0 && dizi[5] == 5);
    cout << "testler başarılı" << endl;
    return 0;
}
