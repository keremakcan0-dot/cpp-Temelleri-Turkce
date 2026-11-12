// Soru: 1 ile n arasındaki tam sayıların toplamını hesaplayınız.
// Kodun yaptığı: 1’den verilen tam sayıya kadarki toplamı hesaplar.

// Tasarım: sayi ---> toplamHesapla() ---> toplam

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

int toplamHesapla(int sayi) {
    int toplam = 0;
    // Toplamı oluşturmak için ilgili değerler sırayla biriktirilir.
    for (int i = 1; i <= sayi; i++) {
        toplam += i;
    }

    return toplam;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(toplamHesapla(5) == 15);
    cout << "testler başarılı" << endl;
    return 0;
}
