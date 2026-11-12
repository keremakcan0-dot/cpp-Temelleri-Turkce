// Soru: 0 ile 15 arasındaki tam sayıların toplamını döngüyle hesaplayınız.
// Kodun yaptığı: 0 ile 15 arasındaki sayıların toplamını for döngüsüyle hesaplar. cout ile sonucu göstermek için giriş/çıkış kütüphanesi kullanılır.

// Tasarım: 0..15 ---> for döngüsü ---> genelToplam

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

int main() {
    // Toplamı biriktireceğimiz değişkeni sıfırdan başlatıyoruz.
    int toplam = 0;
    // for: başlangıç; devam koşulu; her turdaki artış biçiminde yazılır.
    for (int i = 0; i <= 15; i++) {
        // +=, toplam = toplam + i ifadesinin kısa yazımıdır.
        toplam += i;
    }
    cout << toplam << endl;
    return 0;
}
