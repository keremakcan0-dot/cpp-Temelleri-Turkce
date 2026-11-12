// Soru: 14000 sınırını aşmayan Fibonacci sayılarını ekrana yazdırınız.
// Kodun yaptığı: Fibonacci sayılarını 14000 sınırına kadar ekrana yazdırır.

// Tasarım: onceki, simdiki ---> sonrakini hesapla ---> göster

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

int main() {
    // Fibonacci dizisinde ilk iki değeri tutuyoruz: 0 ve 1.
    int onceki = 0;
    int simdiki = 1;

    cout << "Fibonacci sayıları:" << endl;

    // while, koşul doğru kaldığı sürece çalışır.
    while (onceki <= 14000) {
        cout << onceki << " ";
        // Yeni terim, bir önceki iki terimin toplamıdır.
        int sonraki = onceki + simdiki;
        // Bir sonraki tur için değerleri bir basamak ileri kaydırıyoruz.
        onceki = simdiki;
        simdiki = sonraki;
    }
    cout << endl;
    return 0;
}
