// Soru: Verilen iki doğal sayı arasında bölen ilişkisi olup olmadığını bulunuz.
// Kodun yaptığı: İki doğal sayının birinin diğerinin böleni olup olmadığını denetler.

// Tasarım: a, b ---> karsilikliBolenMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool karsilikliBolenMi(int a, int b) {
    // Bölünebilme koşulu, bölümden kalanın sıfır olmasına dayanır.
    if (a == 0 || b == 0) return false;
    return a % b == 0 || b % a == 0;
}

int main() {
    assert(karsilikliBolenMi(3, 12) == true);
    cout << "testler başarılı" << endl;
    return 0;
}
