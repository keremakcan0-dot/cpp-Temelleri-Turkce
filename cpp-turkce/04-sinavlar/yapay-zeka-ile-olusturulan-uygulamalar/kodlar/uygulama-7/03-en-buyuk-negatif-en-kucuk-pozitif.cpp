// Soru: Dizinin en büyük negatif ve en küçük pozitif elemanını bulunuz.
// Kodun yaptığı: Gerçel sayı dizisindeki en büyük negatif ve en küçük pozitif sayıyı bulur (iki türden de en az birer tane vardır).

// Tasarım: dizi[R] ---> enBuyukNegatifEnKucukPozitif() ---> sonuc[2] (en büyük negatif, en küçük pozitif)

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void enBuyukNegatifEnKucukPozitif(const double sayilar[], int adet, double sonuc[]) {
    bool negatifVar = false;
    bool pozitifVar = false;

    // Listeyi tek kez gezerken iki ayrı uç değer takip edilebilir.
    for (int i = 0; i < adet; i++) {
        if (sayilar[i] < 0 && (!negatifVar || sayilar[i] > sonuc[0])) {
            sonuc[0] = sayilar[i];
            negatifVar = true;
        }
        if (sayilar[i] > 0 && (!pozitifVar || sayilar[i] < sonuc[1])) {
            sonuc[1] = sayilar[i];
            pozitifVar = true;
        }
    }
}

int main() {
    double sayilar[7] = {-1, -2, -3, 0, 1, 2, 3};
    double sonuc[2];

    enBuyukNegatifEnKucukPozitif(sayilar, 7, sonuc);
    assert(sonuc[0] == -1);
    assert(sonuc[1] == 1);

    double digerleri[4] = {5.5, -0.5, 2.5, -4};
    enBuyukNegatifEnKucukPozitif(digerleri, 4, sonuc);
    assert(sonuc[0] == -0.5);
    assert(sonuc[1] == 2.5);

    cout << "testler başarılı" << endl;
    return 0;
}
