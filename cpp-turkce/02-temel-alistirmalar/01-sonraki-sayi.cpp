// Soru: Tam sayının bir sonraki değerini döndüren fonksiyon yazınız.
// Kodun yaptığı: Tam sayı alıp bir sonraki tam sayıyı döndüren fonksiyon.

// Tasarım: Sayı ---> sonrakiSayi() ---> sayi + 1

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

int sonrakiSayi(int sayi) {
    // Fonksiyon sonucu çağrıldığı yere döndürür.
    return sayi + 1;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(sonrakiSayi(5) == 6);
    cout << "testler başarılı" << endl;
    return 0;
}
