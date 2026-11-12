// Soru: Bir sayının diğerinin tek böleni olup olmadığını denetleyiniz.
// Kodun yaptığı: a sayısı b’nin böleniyse ve ayrıca tekse doğru döndürür.

// Tasarım: a:N, b:N ---> tekBolenMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool tekBolenMi(int a, int b) {
    // Tek bölen için hem bölme kalanı hem de tek olma koşulu gerekir.
    if (a == 0) return false;
    return b % a == 0 && a % 2 == 1;
}

int main() {
    assert(tekBolenMi(3, 15) == true);
    assert(tekBolenMi(15, 3) == false);   //15, 3’ün böleni değildir.
    assert(tekBolenMi(2, 10) == false);   //Bölendir ancak çift sayıdır.
    assert(tekBolenMi(3, 10) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
