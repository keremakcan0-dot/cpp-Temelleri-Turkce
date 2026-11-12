// Soru: İşaretsiz doğal sayının bölenlerini sayınız.
// Kodun yaptığı: Bir sayının bölenlerini sayar (işaretsiz tam sayı sürümü).

// Tasarım: n ---> bolenleriSay() ---> sayac

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

bool bolenMi(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) return false;
    return (a % b == 0) || (b % a == 0);
}

unsigned int bolenleriSay(unsigned int n) {
    unsigned int sayac = 0;
    // Bölen kontrolünün alternatif uygulamasını bu döngü gerçekleştirir.
    for (unsigned int i = 1; i <= n; i++) {
        if (bolenMi(i, n)) {
            sayac++;
        }
    }

    return sayac;
}

int main() {
    cout << "Test 1 (Sayı 10) - Beklenen: 4 | Sonuç: " << bolenleriSay(10) << endl;
    cout << "Test 2 (Sayı 7) - Beklenen: 2 | Sonuç: " << bolenleriSay(7) << endl;
    cout << "Test 3 (Sayı 12) - Beklenen: 6 | Sonuç: " << bolenleriSay(12) << endl;
    return 0;
}
