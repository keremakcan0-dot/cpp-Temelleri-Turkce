// Soru: Verilen aralıktaki bol sayıların sayısını bulunuz.
// Kodun yaptığı: [a,b] kapalı aralığındaki bol sayıların adedini hesaplar.

// Tasarım: a:N, b:N ---> bolSayilariSay() ---> adet:N

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool bolMu(int a) {
    int bolenlerToplami = 0;
    // Her aday için bölünebilme koşulu test edilerek sayaç güncellenir.
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            bolenlerToplami += i;
        }
    }

    return bolenlerToplami > a;
}

int bolSayilariSay(int a, int b) {
    int sayac = 0;

    for (int i = a; i <= b; i++) {
        if (bolMu(i)) {
            sayac++;
        }
    }

    return sayac;
}

int main() {
    assert(bolSayilariSay(3, 12) == 1);    //Yalnızca 12
    assert(bolSayilariSay(1, 20) == 3);    //12, 18, 20
    assert(bolSayilariSay(1, 11) == 0);
    cout << "testler başarılı" << endl;
    return 0;
}
