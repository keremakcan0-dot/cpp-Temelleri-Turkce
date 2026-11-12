// Soru: Bir yılın artık yıl olup olmadığını belirleyiniz.
// Kodun yaptığı: Yılın artık yıl olup olmadığını belirleyen fonksiyon.

// Tasarım: yil ---> artikYilMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool artikYilMi(int yil) {
    //4’e bölünen yıllar artık yıldır; 100’ün katı olup 400’e bölünmeyenler hariç.
    return (yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0);
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(artikYilMi(2024) == true);
    assert(artikYilMi(2000) == true);
    assert(artikYilMi(1900) == false);
    assert(artikYilMi(2023) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
