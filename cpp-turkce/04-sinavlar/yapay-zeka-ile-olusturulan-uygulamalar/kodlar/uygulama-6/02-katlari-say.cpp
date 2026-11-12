// Soru: 1 ile n arasındaki x katlarının sayısını bulunuz.
// Kodun yaptığı: 1 ile n arasındaki x katlarını sayar (önceki bolunebilirMi fonksiyonunu kullanır).

// Tasarım: x:N, n:N ---> katlariSay() ---> adet:N

// YAZAR: Kerem Akcan
// TARİH: 08/11/2026

#include <iostream>
#include <cassert>

using namespace std;

bool bolunebilirMi(int a, int b) {
    if (b == 0) return false;
    return a % b == 0;
}

int katlariSay(int x, int n) {
    int sayac = 0;
    // Koşulu karşılayan katlar sayaca eklenir.
    for (int i = 1; i <= n; i++) {
        if (bolunebilirMi(i, x)) {
            sayac++;
        }
    }

    return sayac;
}

int main() {
    assert(katlariSay(3, 10) == 3);   //3, 6, 9
    assert(katlariSay(10, 5) == 0);
    assert(katlariSay(1, 4) == 4);
    cout << "testler başarılı" << endl;
    return 0;
}
