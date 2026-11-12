// Soru: Dizideki pozitif sayıların kaç tane olduğunu bulunuz.
// Kodun yaptığı: Bir dizideki pozitif sayıların adedini bulur.

// Tasarım: dizi[N] ---> pozitifleriSay() ---> adet

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool pozitifMi(int a) {
    return a > 0;
}

int pozitifleriSay(int dizi[], int adet) {
    int pozitifler = 0;
    // Liste taranır ve yalnızca koşulu sağlayan elemanlar sayılır.
    for (int i = 0; i < adet; i++) {
        if (pozitifMi(dizi[i])) {
            pozitifler++;
        }
    }

    return pozitifler;
}

int main() {
    int dizi[5] = {1, 2, 3, 4, 5};
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(pozitifleriSay(dizi, 5) == 5);
    cout << "testler başarılı" << endl;
    return 0;
}
