// Soru: Bir doğal sayının bölen sayısını hesaplayınız.
// Kodun yaptığı: Önceki fonksiyonla doğal sayının kaç böleni olduğunu hesaplar.

// Tasarım: a ---> bolenleriSay() ---> toplamBolen

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool karsilikliBolenMi(int a, int b) {
    if (a == 0 || b == 0) return false;
    return a % b == 0 || b % a == 0;
}

int bolenleriSay(int a) {
    int toplamBolen = 0;
    // Olası bölenler sırayla kontrol edilir; uygun olanlar sayılır.
    for (int i = 1; i <= a; i++) {
        if (karsilikliBolenMi(a, i)) {
            toplamBolen++;
        }
    }

    return toplamBolen;
}

int main() {
    assert(bolenleriSay(10) == 4);
    cout << "testler başarılı" << endl;
    return 0;
}
