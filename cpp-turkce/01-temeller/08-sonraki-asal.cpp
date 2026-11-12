// Soru: Girilen tam sayıdan sonra gelen ilk asal sayıyı bulunuz.
// Kodun yaptığı: Bir sayı alır ve bu sayıdan sonraki asal sayıyı bulur.

// Tasarım: sayi ---> arama döngüsü ---> asalMi ---> sonraki asal

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

int main() {
    int sayi;
    // Her yeni aday için asal varsayımını yeniden başlatıyoruz.
    bool asalMi = true;

    cout << "Bir sayı giriniz: ";
    cin >> sayi;

    // do-while, gövdeyi en az bir kez çalıştırır; burada sıradaki sayıyı dener.
    do {
        sayi++;
        asalMi = true;

        if (sayi < 2) {
            asalMi = false;
        }

        // Bir bölen bulunursa sayı asal değildir; break döngüyü erken bitirir.
        for (int i = 2; i * i <= sayi; i++) {
            if (sayi % i == 0) {
                asalMi = false;
                break;
            }
        }
    } while (asalMi == false);

    cout << "Sonraki asal sayı: " << sayi << endl;
    return 0;
}
