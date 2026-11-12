// Soru: Girilen tam sayının asal olup olmadığını belirleyiniz.
// Kodun yaptığı: Bir sayının asal olup olmadığını belirleyen fonksiyon.

// Tasarım: Sayı ---> asalMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool asalMi(int n) {
    // 0 ve 1 asal değildir.
    if (n <= 1) return false;
    // Karekök sınırına kadar bölen aramak yeterlidir; n / i taşmayı önler.
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    // assert, beklenen sonucun doğru olduğunu otomatik olarak denetler.
    assert(asalMi(5) == true);
    assert(asalMi(2) == true);
    assert(asalMi(9) == false);
    assert(asalMi(1) == false);
    assert(asalMi(0) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
