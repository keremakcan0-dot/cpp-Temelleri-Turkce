// Soru: Verilen sayı dizisini küçükten büyüğe sıralayınız.
// Kodun yaptığı: Bir sayı dizisini küçükten büyüğe sıralar.

// Tasarım: dizi[N] ---> sirala() ---> siralanmisDizi[N]

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void sirala(int dizi[], int adet) {
    for (int i = 0; i < adet - 1; i++) {
        // Kabarcık sıralamada komşu elemanlar karşılaştırılır; en büyük değer sona ilerler.
        for (int j = 0; j < adet - 1 - i; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int gecici = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
            }
        }
    }
}

int main() {
    int dizi[5] = {1, 3, 5, 4, 2};
    sirala(dizi, 5);

    for (int i = 0; i < 5; i++) {
        assert(dizi[i] == i + 1);
    }
    cout << "testler başarılı" << endl;
    return 0;
}
