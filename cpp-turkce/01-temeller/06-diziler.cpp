// Soru: Dizi elemanlarını ekrana yazdırıp geçme-kalma durumlarını belirleyiniz.
// Kodun yaptığı: Sayı dizisindeki notları dolaşır; 3 ve üzerini geçen, altını kalan olarak değerlendirir. iostream, ekrana yazdırma imkânı sağlar.

// Tasarım: sayilar[5] ---> for döngüsü ---> ileti (geçti/kaldı)

// YAZAR: Kerem Akcan
// TARİH: 04/11/2026

#include <iostream>

using namespace std;

int main() {
    // Diziler aynı türden birden fazla eleman tutar; ilk indeks 0, son indeks 4 olur.
    int sayilar[5] = {1, 2, 3, 4, 5};

    // Döngü sayesinde her bir dizi elemanını sırayla kontrol ediyoruz.
    for (int i = 0; i < 5; i++) {
        cout << sayilar[i] << endl;
        // sayilar[i], dizinin o andaki i indisli elemanını verir.
        if (sayilar[i] < 3) {
            cout << "kaldı" << endl;
        } else {
            cout << "geçti" << endl;
        }
    }

    return 0;
}
