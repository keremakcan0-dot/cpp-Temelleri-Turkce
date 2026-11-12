// Soru: Doğal sayının faktöriyelini hesaplayınız.
// Kodun yaptığı: Bir sayıyı alıp faktöriyelini döndürür.

// Tasarım: n:Doğal ---> faktoriyel() ---> sonuc:Doğal

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

long long faktoriyel(int sayi) {
    if (sayi < 0 || sayi > 20) return 0;
    long long sonuc = 1;

    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }

    return sonuc;
}

// Bu dosyadaki örnek, yukarıdaki fonksiyonun sonucunu sınar.
int main() {
    assert(faktoriyel(5) == 120);
    assert(faktoriyel(21) == 0);
    cout << "testler başarılı" << endl;
    return 0;
}
