// Soru: Bir sayının üçgensel sayı olup olmadığını belirleyiniz.
// Kodun yaptığı: Verilen doğal sayı üçgensel sayıysa doğru döndürür.

// Tasarım: sayi<N> ----> ucgenselMi ----> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool ucgenselMi(int sayi) {
    if (sayi < 0) return false;
    if (sayi == 0) return true;

    int toplam = 0;
    int i = 1;

    while (toplam < sayi) {
        toplam += i;
        i++;
    }

    return (toplam == sayi);
}

// Bu dosyadaki örnek, yukarıdaki fonksiyonun sonucunu sınar.
int main() {
    assert(ucgenselMi(6) == true);
    assert(ucgenselMi(10) == true);
    assert(ucgenselMi(5) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
