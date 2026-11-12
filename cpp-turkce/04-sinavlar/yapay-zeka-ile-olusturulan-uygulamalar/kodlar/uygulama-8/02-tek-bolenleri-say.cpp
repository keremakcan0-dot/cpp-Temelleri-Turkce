// Soru: Doğal sayının tek bölenlerinin adedini hesaplayınız.
// Kodun yaptığı: Doğal n sayısının tek bölenlerini sayar (tekBolenMi fonksiyonunu kullanır).

// Tasarım: n:N ---> tekBolenleriSay() ---> adet:N

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool tekBolenMi(int a, int b) {
    if (a == 0) return false;
    return b % a == 0 && a % 2 == 1;
}

int tekBolenleriSay(int n) {
    int sayac = 0;
    // Yalnızca tek bölenleri sayacak biçimde adayları denetliyoruz.
    for (int i = 1; i <= n; i++) {
        if (tekBolenMi(i, n)) {
            sayac++;
        }
    }

    return sayac;
}

int main() {
    assert(tekBolenleriSay(5) == 2);    //1, 5
    assert(tekBolenleriSay(12) == 2);   //1, 3
    assert(tekBolenleriSay(9) == 3);    //1, 3, 9
    assert(tekBolenleriSay(8) == 1);    //1
    cout << "testler başarılı" << endl;
    return 0;
}
