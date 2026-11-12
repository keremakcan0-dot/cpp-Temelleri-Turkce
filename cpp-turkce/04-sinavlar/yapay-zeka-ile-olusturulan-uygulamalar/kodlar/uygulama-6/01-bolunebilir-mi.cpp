// Soru: İlk doğal sayının ikinciye tam bölünüp bölünmediğini kontrol ediniz.
// Kodun yaptığı: İlk doğal sayının ikinciye tam bölünüp bölünmediğini denetler.

// Tasarım: a:N, b:N ---> bolunebilirMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool bolunebilirMi(int a, int b) {
    // Bölünebilme kontrolünün temelinde kalan işlemi bulunur.
    if (b == 0) return false;
    return a % b == 0;
}

int main() {
    assert(bolunebilirMi(10, 5) == true);
    assert(bolunebilirMi(5, 5) == true);
    assert(bolunebilirMi(5, 7) == false);
    assert(bolunebilirMi(5, 0) == false);
    cout << "testler başarılı" << endl;
    return 0;
}
