// Soru: Bir tam sayı dizisinin elemanlarını ters sırayla yeni diziye aktarınız.
// Kodun yaptığı: Tam sayı dizisini ters sırayla başka bir diziye kopyalar.

// Tasarım: girdiDizisi<Z>, boyut ---> TersCevir() ---> ciktiDizisi<Z>

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

void TersCevir(const int girdiDizisi[], int adet, int ciktiDizisi[]) {
    // Diziyi ters çevirirken simetrik konumlardaki elemanları karşılaştırırız.
    for (int i = 0; i < adet; i++) {
        ciktiDizisi[i] = girdiDizisi[adet - 1 - i];
    }
}

int main() {
    int girdiDizisi[] = {1, 2, 3, 4};
    int ciktiDizisi[4];

    TersCevir(girdiDizisi, 4, ciktiDizisi);

    assert(ciktiDizisi[0] == 4);
    assert(ciktiDizisi[1] == 3);
    assert(ciktiDizisi[2] == 2);
    assert(ciktiDizisi[3] == 1);

    cout << "testler başarılı" << endl;
    return 0;
}
