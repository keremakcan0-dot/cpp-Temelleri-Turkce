// Soru: Dizinin çift ve tek sayılarını ayrı ayrı toplayınız.
// Kodun yaptığı: Dizideki çift sayıları ve tek sayıları ayrı ayrı toplar.

// Tasarım: dizi[N] ---> toplamlariAyir() ---> dizi[çift], dizi[tek]

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool bolunebilirMi(int a, int b) {
    return b != 0 && a % b == 0;
}

void toplamlariAyir(int girdiDizisi[], int adet, int ciktiDizisi[]) {
    ciktiDizisi[0] = 0; //Çiftler
    ciktiDizisi[1] = 0; //Tekler

    // Çift ve tek değerleri ayrı birikimlerde hesaplıyoruz.
    for (int i = 0; i < adet; i++) {
        if (bolunebilirMi(girdiDizisi[i], 2)) {
            ciktiDizisi[0] += girdiDizisi[i];
        } else {
            ciktiDizisi[1] += girdiDizisi[i];
        }
    }
}

int main() {
    int girdiDizisi[5] = {1, 2, 3, 4, 5};
    int ciktiDizisi[2];

    toplamlariAyir(girdiDizisi, 5, ciktiDizisi);

    assert(ciktiDizisi[0] == 6);
    assert(ciktiDizisi[1] == 9);
    cout << "testler başarılı" << endl;
    return 0;
}
