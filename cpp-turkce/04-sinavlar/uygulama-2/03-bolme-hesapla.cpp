// Soru: Ardışık çıkarma yöntemiyle bölüm ve kalanı bulunuz.
// Kodun yaptığı: Ardışık çıkarma yöntemiyle bölüm ve kalanı hesaplar. Bölüm sıfıra doğru yuvarlanır; kalan bölünenin işaretini korur. Bölen sıfırsa veya bölüm int sınırlarını aşıyorsa iki sonuç da sıfır olur.

// Tasarım: int bolunen, int bolen, int& bolum, int& kalan ---> bolmeHesapla() ---> sonuç

// YAZAR: Kerem Akcan
// TARİH: 12/11/2026 (başlık düzenleme tarihi)

#include <iostream>
#include <cassert>
#include <climits>

using namespace std;

void bolmeHesapla(int bolunen, int bolen, int& bolum, int& kalan) {
    bolum = 0;
    kalan = 0;

    if (bolen == 0) return;

    long long mutlakBolunen = bolunen;
    long long mutlakBolen = bolen;
    if (mutlakBolunen < 0) mutlakBolunen = -mutlakBolunen;
    if (mutlakBolen < 0) mutlakBolen = -mutlakBolen;

    long long q = 0;
    long long r = mutlakBolunen;
    // Bölümü yinelemeli çıkarma yoluyla hesaplayan bölümde bitiş koşulu önemlidir.
    while (r >= mutlakBolen) {
        r -= mutlakBolen;
        ++q;
    }

    if ((bolunen < 0) != (bolen < 0)) q = -q;
    if (q < INT_MIN || q > INT_MAX) return;

    bolum = static_cast<int>(q);
    kalan = (bolunen < 0) ? -static_cast<int>(r) : static_cast<int>(r);
}

int main() {
    int bolum, kalan;

    bolmeHesapla(15, 3, bolum, kalan);
    assert(bolum == 5 && kalan == 0);

    bolmeHesapla(17, 5, bolum, kalan);
    assert(bolum == 3 && kalan == 2);

    bolmeHesapla(-17, 5, bolum, kalan);
    assert(bolum == -3 && kalan == -2);

    bolmeHesapla(17, -5, bolum, kalan);
    assert(bolum == -3 && kalan == 2);

    bolmeHesapla(15, 0, bolum, kalan);
    assert(bolum == 0 && kalan == 0);

    cout << "testler başarılı" << endl;
    return 0;
}
