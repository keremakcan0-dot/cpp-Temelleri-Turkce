// Soru: Negatifleri sıfırlayıp pozitifleri n ile çarparak diziyi dönüştürünüz.
// Kodun yaptığı: Diziyi dönüştürür: negatifler 0, pozitifler n katı olur.

// Tasarım: dizi[N] ---> donustur() ----> V[Z]

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void donustur(int dizi[], int adet, int n) {
    // Her eleman belirtilen kurala göre dönüştürülür; indeks sınırlarına dikkat edilir.
    for (int i = 0; i < adet; i++) {
        if (dizi[i] < 0) {
            dizi[i] = 0;
        } else if (dizi[i] > 0) {
            dizi[i] *= n;
        }
    }
}

int main() {
    int dizi[] = {-1, 0, 1, 2};
    donustur(dizi, 4, 2);

    assert(dizi[0] == 0);
    assert(dizi[1] == 0);
    assert(dizi[2] == 2);
    assert(dizi[3] == 4);
    cout << "testler başarılı" << endl;
    return 0;
}
