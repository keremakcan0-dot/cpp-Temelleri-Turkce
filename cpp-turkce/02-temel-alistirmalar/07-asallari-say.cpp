// Soru: Dizide bulunan asal sayıların sayısını hesaplayınız.
// Kodun yaptığı: Bir dizideki asal sayıların adedini bulur.

// Tasarım: dizi[N] ---> asallariSay() ---> adet

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool asalMi(int sayi) {
    if (sayi <= 1) return false;
    // Her aday için asallık kontrolü yapılarak sayaç artırılır.
    for (int i = 2; i <= sayi / i; i++) {
        if (sayi % i == 0) return false;
    }

    return true;
}

int asallariSay(int dizi[], int boyut) {
    int asalSayisi = 0;

    for (int k = 0; k < boyut; k++) {
        if (asalMi(dizi[k])) {
            asalSayisi++;
        }
    }

    return asalSayisi;
}

int main() {
    int dizi[4] = {1, 2, 3, 4};
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(asallariSay(dizi, 4) == 2);
    cout << "testler başarılı" << endl;
    return 0;
}
