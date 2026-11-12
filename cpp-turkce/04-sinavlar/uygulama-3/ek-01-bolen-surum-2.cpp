// Soru: İki sayı için bölen ilişkisini kullanıcı girdisiyle test ediniz.
// Kodun yaptığı: Bir sayının diğerinin böleni olup olmadığını konsol girdisiyle sınar.

// Tasarım: sayi1, sayi2 ---> bolenMi() ---> D veya Y

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

bool bolenMi(int sayi1, int sayi2) {
    // Bu alternatif çözümde de bölünebilme mantığı korunur.
    if (sayi1 == 0 || sayi2 == 0) return false;
    return sayi1 % sayi2 == 0 || sayi2 % sayi1 == 0;
}

int main() {
    int sayi1, sayi2;
    cout << "İlk sayıyı giriniz: ";
    cin >> sayi1;
    cout << "İkinci sayıyı giriniz: ";
    cin >> sayi2;
    cout << "Sonuç (1=Doğru, 0=Yanlış): " << bolenMi(sayi1, sayi2) << endl;
    return 0;
}
