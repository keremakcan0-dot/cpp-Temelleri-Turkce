// Soru: Not listesindeki başarılı öğrencilerin sayısını hesaplayınız.
// Kodun yaptığı: Not dizisindeki başarılı öğrenci sayısını döndürür.

// Tasarım: notlar[R] ---> notlariSay ---> gecenler<N>

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

int notlariSay(const double notlar[], int adet) {
    int gecenler = 0;
    // Her notu eşik değerle karşılaştırıp geçen öğrencileri sayarız.
    for (int i = 0; i < adet; i++) {
        if (notlar[i] >= 5) {
            gecenler++;
        }
    }

    return gecenler;
}

int main() {
    double notlar[] = {3, 5, 8, 4, 10, 2};
    assert(notlariSay(notlar, 6) == 3);
    assert(notlariSay(notlar, 3) == 2);
    cout << "testler başarılı" << endl;
    return 0;
}
